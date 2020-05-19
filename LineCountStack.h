#pragma once
#include <stdio.h>
#include <stdlib.h>

struct LineCounter {
	struct LineCounter* next;
	int lines;
	char* filename;
};

typedef struct LineCounter LineCounter;

LineCounter* linesStack; //stack representing number of lines in files

LineCounter* newLineCounter(char* fileName) {
	struct LineCounter* elem = malloc(sizeof(struct LineCounter));
	elem->lines = 1;
	elem->filename = fileName;
	elem->next = 0;
	return elem;
}

void initStackNewLineCounter(char* filename)
{
	linesStack = newLineCounter(filename);
}

void addLineCounter(char* fileName)
{
	LineCounter* elem = newLineCounter(fileName);

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

	LineCounter* elem = linesStack;
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
		LineCounter* elem = linesStack;
		linesStack = linesStack->next;
		free(elem);
	}
}


