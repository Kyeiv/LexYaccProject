#pragma once
#include <stdio.h>
#include <stdlib.h>

struct FileInformation {
	struct FileInformation* next;
	int lines;
	char* filename;
	bool usesNamespaceStd;
};

typedef struct FileInformation FileInformation;

FileInformation* linesStack; //stack representing number of lines in files

FileInformation* newLineCounter(char* fileName) {
	struct FileInformation* elem = malloc(sizeof(struct FileInformation));
	elem->lines = 1;
	elem->filename = fileName;
	elem->next = 0;
	elem->usesNamespaceStd = false;
	return elem;
}

void initStackNewLineCounter(char* filename)
{
	linesStack = newLineCounter(filename);
}

void addLineCounter(char* fileName)
{
	FileInformation* elem = newLineCounter(fileName);

	if (linesStack == 0) {
		linesStack = elem;
		return;
	}

	elem->next = linesStack;
	linesStack = elem;
}

void popLineCounter()
{
	if (linesStack == 0)
		return 0;

	FileInformation* elem = linesStack;
	linesStack = linesStack->next;

	free(elem);
}

char* getCurrentFileName()
{
	return linesStack->filename;
}

int getCurrentLines()
{
	return linesStack->lines;
}

void incrementCurrentLines()
{
	linesStack->lines += 1;
}

void cleanStack()
{
	while (linesStack != NULL)
	{
		FileInformation* elem = linesStack;
		linesStack = linesStack->next;
		free(elem);
	}
}

bool validateStd() {
	if (!linesStack->usesNamespaceStd) {
		//printf("\rERROR: 'string' requires namespace std. \n");
		return true;
	}
	return false;
}

void setUsingStd() {
	linesStack->usesNamespaceStd = true;
}