#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* variablesNumerical[1000];
int countVariablesNumerical = 0;

char* variablesString[1000];
int countVariablesString = 0;

char* variablesLogical[1000];
int countVariablesLogical = 0;

char** variables;
int* countVariables;


enum Type
{
	NUMERICAL,
	CHARACTERS,
	LOGICAL
};


void setProperOperants(enum Type type)
{
	switch (type)
	{
	case NUMERICAL:
		variables = variablesNumerical;
		countVariables = &countVariablesNumerical;
		break;
	case CHARACTERS:
		variables = variablesString;
		countVariables = &countVariablesString;
		break;
	case LOGICAL:
		variables = variablesLogical;
		countVariables = &countVariablesLogical;
		break;
	}
}

bool variableExists(char* variableName)
{
	for (int i = 0; i < *countVariables; i++)
	{
		char* currString = variables[i];
		if (strcmp(currString, variableName) == 0)
		{
			return true;
		}
	}
	return false;
}

void handleNewVariableName(char* variableName, enum Type type)
{
	for (int i = 0; i != LOGICAL; ++i)
	{
		setProperOperants((enum Type) i);
		if(variableExists(variableName))
		{
			printf("ERROR: variable '%s' already exist! \n", variableName);
			return;
		}
	}
	setProperOperants(type);
	variables[*countVariables] = variableName;
	printf("variable value: %s \n", variables[*countVariables]);
	*countVariables = *countVariables + 1;
}

void handleVarNameInAssigning(char* variableName, enum Type type)
{
	setProperOperants(type);
	if (!variableExists(variableName))
	{
		printf("ERROR: variable '%s' of doesn't exist! \n", variableName);
	}
	else
	{
		//everything is ok
	}
}

void validateTwoAssigningOperants(char* var1, char* var2) {

	bool isExistsVar1 = false,
		isExistsVar2 = false;
	enum Type typeVar1,
		typeVar2;

	for (int i = 0; i != LOGICAL; ++i) {
		setProperOperants((enum Type)i);
		if (!isExistsVar1 && variableExists(var1)) {
			isExistsVar1 = true;
			typeVar1 = (enum Type) i;
		}
		if (!isExistsVar2 && variableExists(var2)) {
			isExistsVar2 = true;
			typeVar2 = (enum Type) i;
		}
	}
	
	if (!isExistsVar1) {
		printf("ERRORc: Variable %s doesn't exist", var1);
	}
	if (!isExistsVar2) {
		printf("ERRORc: Variable %s doesn't exist", var2);
	}
	if (isExistsVar1 && isExistsVar2 && typeVar1 != typeVar2) {
		printf("ERRORc: Types missmatch!");
	}
}