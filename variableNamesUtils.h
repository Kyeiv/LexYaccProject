#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* variablesNumerical[1000];
int countVariablesNumerical = 0;

char* variablesString[1000];
int countVariablesString = 0;

char* variablesLogical[1000];
int countVariablesLogical = 0;

char** variables;
int* countVariables;

const variableTypesNumber = 3;

void setProperOperants(int type)
{
	switch (type)
	{
	case 0:
		variables = variablesNumerical;
		countVariables = &countVariablesNumerical;
		break;
	case 1:
		variables = variablesString;
		countVariables = &countVariablesString;
		break;
	case 2:
		variables = variablesLogical;
		countVariables = &countVariablesLogical;
		break;
	}
}

int variableExists(char* variableName)
{
	for (int i = 0; i < *countVariables; i++)
	{
		char* currString = variables[i];
		if (strcmp(currString, variableName) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void handleNewVariableName(char* variableName, int type)
{
	int exists = 0;
	for (int i = 0; i < variableTypesNumber; i++)
	{
		setProperOperants(i);
		if(variableExists(variableName)==1)
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

void handleVarNameInAssigning(char* variableName, int type)
{
	setProperOperants(type);
	if (variableExists(variableName) == 0)
	{
		printf("ERROR: variable '%s' of doesn't exist! \n", variableName);
	}
	else
	{
		//everything is ok
	}
}

void validateTwoAssigningOperants(char* var1, char* var2) {
	int var1Type = -1, var2Type = -1;
	for (int i = 0; i < variableTypesNumber; i++) {
		setProperOperants(i);
		if (var1Type = -1 && variableExists(var1)) {
			var1Type = i;
		}
		if (var2Type = -1 && variableExists(var2)) {
			var2Type = i;
		}
	}
	if (var1Type == -1) {
		printf("ERRORc: Variable %s doesn't exist", var1);
	}
	if (var2Type == -1) {
		printf("ERRORc: Variable %s doesn't exist", var2);
	}
	if (var1Type != -1 && var2Type != -1 && var1Type != var2Type) {
		printf("ERRORc: Types missmatch!");
	}
}