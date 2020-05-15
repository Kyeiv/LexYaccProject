#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "NameOrigin.h"

#define NULL 0
#define NUMERICAL "numerical"
#define CHARACTERS "char"
#define LOGICAL "bool"
#define VOIDD "void"
#define NONE "none"

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

int countVariablesToRemove = 0;

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
	else {
		printf("DEV ERROR: setProperOperants: not known origin: '%d' ! \n", (int)nameOrigin);
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
			char* dest = malloc(i*sizeof(char));
			strncpy(dest, text, i);
			dest[i] = '\0';
			//printf("%s", dest);
			return dest;
		}
	}
}
void handleNewName(char* name, char* type, enum NameOrigin nameOrigin)
{
	if (isLocalVariable) {
		countVariablesToRemove++;
	}

	setProperOperants(nameOrigin);

	if (nameOrigin == CLASS && strcmp(type, NONE) != 0) //If type==NONE that means it's class declaration
														//If type!=NONE - its a class variable
	{
		if (!nameExists(type))
		{
			printf("ERROR: class '%s not found! \n", type);
			return;
		}
		nameOrigin = VAR;
		setProperOperants(nameOrigin);
	}

	if(nameExists(name))
	{
		printf("ERROR: %s '%s' already exist! \n", getNameOriginString(nameOrigin), name);
		return;
	}
	names[*countNames] = Variable_new(name, type);
	printf("%s name: %s \n", getNameOriginString(nameOrigin), names[*countNames]->name);
	*countNames = *countNames + 1;
}

bool handleNameInAssigning(char* variableName, char* type, enum NameOrigin nameOrigin)
{
	setProperOperants(nameOrigin);
	if (!nameInTypeExists(variableName, type))
	{
		printf("ERROR: %s '%s' of '%s' type doesn't exist! \n", getNameOriginString(nameOrigin), variableName, type);
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
	printf("ERROR: %s '%s' doesn't exist \n", getNameOriginString(nameOrigin), name);
	return false;
}

/*
	check in Numerical type if variable exists 
*/
void nameInTypeExistsInOrigin(char* name, char* type, enum NameOrigin nameOrigin) {
	setProperOperants(nameOrigin);
	if (!nameInTypeExists(name, type)) {
		printf("ERROR: %s '%s' of '%s' type doesn't exist \n", getNameOriginString(nameOrigin), name, type);
	}
}

//@TODO support func + var, var+var etc //for now var+var or func+func
void validateTwoAssigningOperants(char* name1, char* name2, enum NameOrigin nameOrigin) {

	setProperOperants(nameOrigin);
	struct TypedName* typedName1 = getTypedName(name1);
	struct TypedName* typedName2 = getTypedName(name2);
	
	if (typedName1 == NULL) {
		printf("ERRORc: %s %s doesn't exist \n", getNameOriginString(nameOrigin), name1);
	}
	if (typedName2 == NULL) {
		printf("ERRORc: %s %s doesn't exist \n", getNameOriginString(nameOrigin), name2);
	}
	if (typedName1 != NULL && typedName2 != NULL && strcmp(typedName1->type,typedName2->type) != 0) {
		printf("ERRORc: Types missmatch! Cannot assigned '%s' to '%s' \n", typedName1->type, typedName2->type);
	}
}

void setLastFunctionType(char* type)
{
	lastFunctionType = type;
}

void validateReturn(char* type)
{
	if (strcmp(lastFunctionType, NONE) == 0) {
		printf("ERROR: Cannot return without function! \n");
		return;
	}

	if (strcmp(lastFunctionType, type) != 0) {
		printf("ERROR: Types missmatch! Cannot return %s in %s function \n", type, lastFunctionType);
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
		printf("ERROR: no previous declaration of return variable '%s' \n", name);
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
			printf("ERROR: No return statement at the end of %s function! \n", lastFunctionType);
		}
	}
	wasReturnStatement = false;
	lastFunctionType = NONE;
}

void setLocalVariableFlag() {
	isLocalVariable = true;
}

void setClassFlag(bool flag) {
	isClassBlock = flag;
}

void checkIfInClass() {
	if (!isClassBlock) {
		printf("ERROR: visibility identifier can only be declared in classes! \n");
	}
}

void resetLocalValues() {
	countVariablesToRemove = 0;
}

void removeLocalVariable() {
	int oldCount = countVariables;
	countVariables -= countVariablesToRemove;
	for (int i=countVariables; i< countVariables; i++)
	{
		free(variables[i]);
	}
}

void endedBlockOfCode() {
	removeLocalVariable();
	isLocalVariable = false;
	resetLocalValues();
}

void validateExistenceAndIsNotPrimitve(char* name) {
	setProperOperants(VAR);
	struct TypedName* typedName = getTypedName(name);
	if (typedName == NULL) {
		printf("ERROR: variable '%s' doesn't exist \n", name);
	}
}
void isPrimitive(char* type) {
	if (strcmp(type, NUMERICAL) == 0 || strcmp(type, CHARACTERS) == 0 || strcmp(type, LOGICAL) == 0) {
		printf("ERROR:cannot access primitive type '%s' \n", type);
	}
}