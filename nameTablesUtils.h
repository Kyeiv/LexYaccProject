#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "Type.h"

char* variablesNumerical[1000];
int countVariablesNumerical = 0;

char* variablesString[1000];
int countVariablesString = 0;

char* variablesLogical[1000];
int countVariablesLogical = 0;

char* functionsNumerical[1000];
int countFunctionsNumerical = 0;

char* functionsString[1000];
int countFunctionsString = 0;

char* functionsLogical[1000];
int countFunctionsLogical = 0;

char* functionsVoid[1000];
int countFunctionsVoid = 0;

char* namesErr[1000];
int countNamesErr = 0;

bool wasReturnStatement = false;
enum Type lastFunctionType = NONE;

char** names;
int* countNames;

bool isLocalVariable = false;
int countVariablesStringToRemove = 0;
int countVariablesNumericalToRemove = 0;
int countVariablesLogicalToRemove = 0;

void setProperOperants(enum Type type, enum NameOrigin nameOrigin)
{
	if (nameOrigin == VAR) {
		switch (type)
		{
		case NUMERICAL:
			names = variablesNumerical;
			countNames = &countVariablesNumerical;
			break;
		case CHARACTERS:
			names = variablesString;
			countNames = &countVariablesString;
			break;
		case LOGICAL:
			names = variablesLogical;
			countNames = &countVariablesLogical;
			break;
		case VOIDD:
			names = namesErr;
			countNames = &countNamesErr;
			printf("DEV ERROR: setProperOperants: do not use 'void' with variables! \n");
			break;
		}
	}
	else if (nameOrigin == FUNC) {
		switch (type)
		{
		case NUMERICAL:
			names = functionsNumerical;
			countNames = &countFunctionsNumerical;
			break;
		case CHARACTERS:
			names = functionsString;
			countNames = &countFunctionsString;
			break;
		case LOGICAL:
			names = functionsLogical;
			countNames = &countFunctionsLogical;
			break;
		case VOIDD:
			names = functionsVoid;
			countNames = &countFunctionsVoid;
			break;
		}
	}
	else{
		printf("DEV ERROR: setProperOperants: not known origin: '%d' ! \n", (int)nameOrigin);
	}

}

/*
	check in a one type if variable exists --==!! needing setProperOperants first !!==--
*/
bool nameInTypeExists(char* variableName)
{

	for (int i = 0; i < *countNames; i++)
	{
		char* currString = names[i];
		if (strcmp(currString, variableName) == 0)
		{
			return true;
		}
	}
	return false;
}

void addLocalVariableToRemove(enum Type type) {
	switch (type)
	{
	case NUMERICAL:
		countVariablesNumericalToRemove++;
		break;
	case CHARACTERS:
		countVariablesStringToRemove++;
		break;
	case LOGICAL:
		countVariablesLogicalToRemove++;
		break;
	}
}

void handleNewName(char* variableName, enum Type type, enum NameOrigin nameOrigin)
{
	if (isLocalVariable) {
		addLocalVariableToRemove(type);
	}
	int max_search_count = VOIDD;

	if (nameOrigin == VAR) {
		max_search_count = LOGICAL;
	}

	for (int i = 0; i <= max_search_count; i++)
	{
		setProperOperants((enum Type) i, nameOrigin);
		if(nameInTypeExists(variableName))
		{
			printf("ERROR: %s '%s' already exist! \n", getNameOriginString(nameOrigin), variableName);
			return;
		}
	}
	setProperOperants(type, nameOrigin);
	names[*countNames] = variableName;
	printf("%s name: %s \n", getNameOriginString(nameOrigin), names[*countNames]);
	*countNames = *countNames + 1;

}

bool handleNameInAssigning(char* variableName, enum Type type, enum NameOrigin nameOrigin)
{
	setProperOperants(type, nameOrigin);
	if (!nameInTypeExists(variableName))
	{
		printf("ERROR: %s '%s' of '%s' type doesn't exist! \n", getNameOriginString(nameOrigin), variableName, getTypeName(type));
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
void nameExistsInOrigin(char* variable, enum NameOrigin nameOrigin) {

	for (int i = 0; i <= LOGICAL; i++) {

		setProperOperants((enum Type) i, nameOrigin);
		if (nameInTypeExists(variable)) {
			return;
		}
	}
	printf("ERROR: %s '%s' doesn't exist \n", getNameOriginString(nameOrigin), variable);
}

/*
	check in Numerical type if variable exists 
*/
void nameInNumericalTypeExists(char* variable, enum NameOrigin nameOrigin) {

	setProperOperants(NUMERICAL, nameOrigin);
	if (!nameInTypeExists(variable)) {
		printf("ERROR: %s '%s' of 'int' type doesn't exist \n", getNameOriginString(nameOrigin), variable);
	}
}

//@TODO support func + var, var+var etc //for now var+var or func+func
void validateTwoAssigningOperants(char* var1, char* var2, enum NameOrigin nameOrigin) {

	bool isExistsVar1 = false,
		isExistsVar2 = false;
	enum Type typeVar1,
		typeVar2;

	for (int i = 0; i <= LOGICAL; i++) {
		setProperOperants((enum Type)i, nameOrigin);
		if (!isExistsVar1 && nameInTypeExists(var1)) {
			isExistsVar1 = true;
			typeVar1 = (enum Type) i;
		}
		if (!isExistsVar2 && nameInTypeExists(var2)) {
			isExistsVar2 = true;
			typeVar2 = (enum Type) i;
		}
	}
	
	if (!isExistsVar1) {
		printf("ERRORc: %s %s doesn't exist \n", getNameOriginString(nameOrigin), var1);
	}
	if (!isExistsVar2) {
		printf("ERRORc: %s %s doesn't exist \n", getNameOriginString(nameOrigin), var2);
	}
	if (isExistsVar1 && isExistsVar2 && typeVar1 != typeVar2) {
		printf("ERRORc: Types missmatch! Cannot assigned '%s' to '%s' \n", getTypeName(typeVar1), getTypeName(typeVar2));
	}
}

void setLastFunctionType(enum Type type)
{
	lastFunctionType = type;
}

void validateReturn(enum Type type)
{
	if (lastFunctionType == NONE) {
		printf("ERROR: Cannot return without function! \n");
		return;
	}

	if (type != lastFunctionType) {
		printf("ERROR: Types missmatch! Cannot return %s in %s function \n", getTypeName(type), getTypeName(lastFunctionType));
	}
	else {
		wasReturnStatement = true;
	}
}

void validateEndOfFunction()
{
	switch (lastFunctionType)
	{
	case NUMERICAL:
	case CHARACTERS:
	case LOGICAL:
		if (!wasReturnStatement) {
			printf("ERROR: No return statement at the end of %s function! \n", getTypeName(lastFunctionType));
		}
		break;
	}
	
	wasReturnStatement = false;
	lastFunctionType = NONE;
}



void setLocalVariableFlag() {
	isLocalVariable = true;
}

void resetLocalValues() {

	countVariablesStringToRemove = 0;
	countVariablesNumericalToRemove = 0;
	countVariablesLogicalToRemove = 0;
}

void removeLocalVariable() {
	for (int i = 0; i <= LOGICAL; i++) {

		setProperOperants((enum Type)i, VAR);
		switch ((enum Type)i)
		{
		case NUMERICAL:
			countVariablesNumerical = countVariablesNumerical - countVariablesNumericalToRemove;
			break;
		case CHARACTERS:
			countVariablesString = countVariablesString - countVariablesStringToRemove;
			break;
		case LOGICAL:
			countVariablesLogical = countVariablesLogical - countVariablesLogicalToRemove;
			break;
		}
	}
}
void endedBlockOfCode() {

	removeLocalVariable();
	isLocalVariable = false;
	resetLocalValues();
}