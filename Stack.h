#pragma once
#include <stdio.h>
#include <stdlib.h>
struct stack
{
	int maxsize;	// define max capacity of stack
	int top;
	int *items;
};

//initialize stack
struct stack* newStack(int capacity)
{
	struct stack *pt = (struct stack*)malloc(sizeof(struct stack));

	pt->maxsize = capacity;
	pt->top = -1;
	pt->items = (int*)malloc(sizeof(int) * capacity);

	return pt;
}

int size(struct stack *pt)
{
	return pt->top + 1;
}

int isEmpty(struct stack *pt)
{
	return pt->top == -1;	// or return size(pt) == 0;
}

int isFull(struct stack *pt)
{
	return pt->top == pt->maxsize - 1;	// or return size(pt) == pt->maxsize;
}

void push(struct stack *pt)
{
	if (isFull(pt))
	{
		exit(EXIT_FAILURE);
	}

	pt->items[++pt->top] = 0;
}

int getNumberOfLocalVariable(struct stack *pt)
{
	// check for empty stack
	if (!isEmpty(pt))
		return pt->items[pt->top];
	else
		exit(EXIT_FAILURE);
}

void pop(struct stack *pt)
{
	// check for stack underflow
	if (isEmpty(pt))
	{
		exit(EXIT_FAILURE);
	}


	pt->items[pt->top--];
}

void incrementLocalVariableNumber(struct stack *pt)
{
	// check if stack is already full.
	if (isFull(pt))
	{
		exit(EXIT_FAILURE);
	}
	int nr = pt->items[pt->top] + 1;

	//overwrite existing value
	pt->items[pt->top] = nr;
}