#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "NameOrigin.h"
#include "FileInformationStack.h"
#include "Stack.h"

#define NULL 0
#define NUMERICAL "numerical"
#define CHARACTERS "string"
#define LOGICAL "bool"
#define VOIDD "void"
#define NONE "none"

char* path = "Inputs//";
int lineCount=0;

bool isError = false;

struct TypedName {
	char* name;
	char* type;
};

struct TypedName* Variable_new(char* name, char* type) {
	struct TypedName* v = malloc(sizeof(struct TypedName));
	v->name = name;
	v->type = type;
	return v;
}

struct TypedName* variables[1000];
int countVariables = 0;

struct TypedName* functions[1000];
int countFunctions = 0;

struct TypedName* classes[1000];
int countClasses = 0;

struct TypedName* namesErr[1000];
int countNamesErr = 0;

bool wasReturnStatement = false;
char* lastFunctionType = NONE;

struct TypedName** names;
int* countNames;

bool isLocalVariable = false;
bool isClassBlock = false;

char* usedFunctionName = NONE;

struct stack *localVariableStack; //stack representing number of local variable in each block of code
int leftBracket = 0; //number of starting block of code
int rightBracket = 0; //number of ending block of code
bool isHeaderFunction; //check if header function
int nestedForNumber = 0; //number of nested for

void initStack(char* filename) {
	localVariableStack = newStack(1000);
	initStackNewLineCounter(filename);
}

void setProperOperants(enum NameOrigin nameOrigin)
{
	if (nameOrigin == VAR)
	{
		names = variables;
		countNames = &countVariables;
	}
	else if (nameOrigin == FUNC)
	{
		names = functions;
		countNames = &countFunctions;
	}
	else if (nameOrigin = CLASS)
	{
		names = classes;
		countNames = &countClasses;
	}

}

/*
	check in a one type if variable exists --==!! needing setProperOperants first !!==--
*/
bool nameExists(char* variableName)
{
	for (int i = 0; i < *countNames; i++)
	{
		if (strcmp(names[i]->name, variableName) == 0)
		{
			return true;
		}
	}
	return false;
}

bool nameInTypeExists(char* variableName, char* type) {
	for (int i = 0; i < *countNames; i++)
	{
		if (strcmp(names[i]->name, variableName) == 0 && strcmp(names[i]->type, type) == 0)
		{
			return true;
		}
	}
	return false;
}

struct TypedName* getTypedName(char* name) {
	for (int i = 0; i < *countNames; i++)
	{
		if (strcmp(names[i]->name, name) == 0)
		{
			return names[i];
		}
	}
	return NULL;
}
char* getNameFromDataAccess(char* text) {
	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == '.') {
			char* dest = malloc(i * sizeof(char));
			strncpy(dest, text, i);
			dest[i] = '\0';
			return dest;
		}
	}
}
void setErrorFlag() {
	if (!isError) {
		system("cls");
		isError = true;
	}
}

void isErrorInStd(bool flag) {
	if (flag) {
		setErrorFlag();
		printf("\rERROR: 'string' requires namespace std. \n");
	}
}

void handleNewName(char* name, char* type, enum NameOrigin nameOrigin)
{
	if (isLocalVariable || isHeaderFunction || nestedForNumber > 0) { //if local variable or declare variable in (header function or for statement)
		if (nameOrigin != FUNC) {
			incrementLocalVariableNumber(localVariableStack);
		}
	}

	setProperOperants(nameOrigin);

	if (nameOrigin == CLASS && strcmp(type, NONE) != 0) //If type==NONE that means it's class declaration
														//If type!=NONE - its a class variable
	{
		if (!nameExists(type))
		{
			setErrorFlag();
			printf("\rERROR: class '%s' not found! In file '%s', line: %d\n", type, getCurrentFileName(), getCurrentLines());
			return;
		}
		nameOrigin = VAR;
		setProperOperants(nameOrigin);
	}

	if (nameExists(name))
	{
		setErrorFlag();
		printf("\rERROR: %s '%s' already exist! In file '%s', line: %d\n", getNameOriginString(nameOrigin), name, getCurrentFileName(), getCurrentLines());
		return;
	}
	
	if (nameOrigin != FUNC || (nameOrigin == FUNC && !isClassBlock)) {
		names[*countNames] = Variable_new(name, type);
		*countNames = *countNames + 1;
	}

}

bool handleNameInAssigning(char* variableName, char* type, enum NameOrigin nameOrigin)
{
	setProperOperants(nameOrigin);
	if (!nameInTypeExists(variableName, type))
	{
		setErrorFlag();
		printf("\rERROR: %s '%s' of '%s' type doesn't exist! In file '%s', line: %d\n", getNameOriginString(nameOrigin), variableName, type, getCurrentFileName(), getCurrentLines());
		return false;
	}
	else
	{
		return true;
	}
}
/*
	check in all types if variable exists
*/
void nameExistsInOrigin(char* name, enum NameOrigin nameOrigin) {
	setProperOperants(nameOrigin);
	if (nameExists(name)) {
		return true;
	}
	setErrorFlag();
	printf("\rERROR: %s '%s' doesn't exist! In file '%s', line: %d\n", getNameOriginString(nameOrigin), name, getCurrentFileName(), getCurrentLines());
	return false;
}

/*
	check in Numerical type if variable exists
*/
void nameInTypeExistsInOrigin(char* name, char* type, enum NameOrigin nameOrigin) {
	setProperOperants(nameOrigin);
	if (!nameInTypeExists(name, type)) {
		setErrorFlag();
		printf("\rERROR: %s '%s' of '%s' type doesn't exist! In file '%s', line: %d \n", getNameOriginString(nameOrigin), name, type, getCurrentFileName(), getCurrentLines());
	}
}

//@TODO support func + var, var+var etc //for now var+var or func+func
void validateTwoAssigningOperants(char* name1, char* name2, enum NameOrigin nameOrigin) {

	setProperOperants(nameOrigin);
	struct TypedName* typedName1 = getTypedName(name1);
	struct TypedName* typedName2 = getTypedName(name2);

	if (typedName1 == NULL) {
		setErrorFlag();
		printf("\rERRORc: %s %s doesn't exist! In file '%s', line: %d \n", getNameOriginString(nameOrigin), name1, getCurrentFileName(), getCurrentLines());
	}
	if (typedName2 == NULL) {
		setErrorFlag();
		printf("\rERRORc: %s %s doesn't exist %s:%d \n", getNameOriginString(nameOrigin), name2, getCurrentFileName(), getCurrentLines());
	}
	if (typedName1 != NULL && typedName2 != NULL && strcmp(typedName1->type, typedName2->type) != 0) {
		setErrorFlag();
		printf("\rERRORc: Types missmatch! Cannot assigned '%s' to '%s'. In file '%s', line: %d \n", typedName1->type, typedName2->type, getCurrentFileName(), getCurrentLines());
	}
}

void setLastFunctionType(char* type)
{
	lastFunctionType = type;
}

void validateReturn(char* type)
{
	if (strcmp(lastFunctionType, NONE) == 0) {
		setErrorFlag();
		printf("\rERROR: Cannot return without function! In file '%s', line: %d \n", getCurrentFileName(), getCurrentLines());
		return;
	}

	if (strcmp(lastFunctionType, type) != 0) {
		setErrorFlag();
		printf("\rERROR: Types missmatch! Cannot return %s in %s function! In file '%s', line: %d \n", type, lastFunctionType, getCurrentFileName(), getCurrentLines());
	}
	else {
		wasReturnStatement = true;
	}
}

void validateReturnWithVarName(char* name)
{
	struct TypedName* var = getTypedName(name);
	if (var == NULL)
	{
		setErrorFlag();
		printf("\rERROR: no previous declaration of return variable '%s'! In file '%s', line: %d \n", name, getCurrentFileName(), getCurrentLines());
	}
	else
	{
		validateReturn(var->type);
	}
}

void validateEndOfFunction()
{
	if (strcmp(lastFunctionType, NONE) != 0 && strcmp(lastFunctionType, VOIDD) != 0)
	{
		if (!wasReturnStatement) {
			setErrorFlag();
			printf("\rERROR: No return statement at the end of %s function! In file '%s', line: %d \n", lastFunctionType, getCurrentFileName(), getCurrentLines());
		}
	}
	wasReturnStatement = false;
	lastFunctionType = NONE;
}



void setClassFlag(bool flag) {
	isClassBlock = flag;
}

void checkIfInClass() {
	if (!isClassBlock) {
		setErrorFlag();
		printf("\rERROR: visibility identifier can only be declared in classes! In file '%s', line: %d \n", getCurrentFileName(), getCurrentLines());
	}
}

void handleForStatement() {
	push(localVariableStack);
	nestedForNumber++;
}

void handleFunctionHeader() {
	push(localVariableStack);
	isHeaderFunction = true;
}

void startedBlockOfCode() {

	leftBracket++;
	push(localVariableStack);
	isLocalVariable = true;
}

void removeLocalVariable(bool endOfAllBlock) {

	//remove all variables in ended block of code
	countVariables -= getNumberOfLocalVariable(localVariableStack);
	pop(localVariableStack);

	//remove variables from header of function
	if (endOfAllBlock && isHeaderFunction) { 
		countVariables -= getNumberOfLocalVariable(localVariableStack);
		pop(localVariableStack);
		isHeaderFunction = false;
	}

	//remove variables from header of for
	if (nestedForNumber > 0) { 
		countVariables -= getNumberOfLocalVariable(localVariableStack);
		pop(localVariableStack);
		nestedForNumber--;
	}
	   
}

void endedBlockOfCode() {

	rightBracket++;
	if (leftBracket == rightBracket) {
		isLocalVariable = false;
		leftBracket = 0;
		rightBracket = 0;
	}
	removeLocalVariable(!isLocalVariable);
}

void validateExistenceAndIsNotPrimitve(char* name) {
	setProperOperants(VAR);
	struct TypedName* typedName = getTypedName(name);
	if (typedName == NULL) {
		setErrorFlag();
		printf("\rERROR: variable '%s' doesn't exist! In file '%s', line: %d \n", name, getCurrentFileName(), getCurrentLines());
	}
}
void isPrimitive(char* type) {
	if (strcmp(type, NUMERICAL) == 0 || strcmp(type, CHARACTERS) == 0 || strcmp(type, LOGICAL) == 0) {
		printf("\rERROR:cannot access primitive type '%s'! In file '%s', line: %d \n", type, getCurrentFileName(), getCurrentLines());
	}
}

void setUsedFunctionName(char* name)
{
	usedFunctionName = name;
}

char* getUsedFunctionName()
{
	return usedFunctionName;
}

char* handleInclude(char* includeText)
{
	for (int i = 0; i < strlen(includeText); i++) {
		if (includeText[i] == '"') {
			char* dest = malloc((i * sizeof(char)) - 1);
			strncpy(dest, includeText + i + 1, strlen(includeText) - i - 1);
			dest[strlen(includeText) - i - 2] = '\0';
			return dest;
		}
	}
}

void incrementLineCount() {
	lineCount++;
}

bool getErrorFlag() {
	return isError;
}



char* concat(const char *s1, const char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *result = malloc(len1 + len2 + 1); 
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);
	return result;
}

char* getPath() {
	return path;
}