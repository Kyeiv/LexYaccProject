%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	#include <stdbool.h>
	#include "variableNamesUtils.h"
	void yyerror(char *s);
	int yylex();
	bool isAssigned = false;
	extern FILE* yyin;
%}

%union SUPER_TYPE
{
	double dtype;
	char* stype;
}

%token <dtype>NUMBER
%token <stype>DOUBLE
%token <stype>STRING
%token <stype>TRUE
%token <stype>FALSE
%token <stype>INT
%token <stype>BOOL
%token <stype>SEMICOLON
%token <stype>VARIABLE_NAME
%token <stype>STRING_VALUE

%%
program: program instruction '\n'		{ printf("dobre wyr c++ \n"); }
	| error '\n'					{ yyerror("Obsluga bledu"); yyerrok;}
	|
	;
expression: NUMBER { 
	isAssigned = true;
}
|	VARIABLE_NAME { 
	isAssigned = handleVarNameInAssigning($1, NUMERICAL); 
}
|	expression'+'expression { }
|	expression'-'expression { }
|	expression'*'expression { }
|	expression'/'expression { }
|
;

instruction: variable_declaration
| assigning
| instruction instruction
;

variable_declaration: numerical_type_variable VARIABLE_NAME SEMICOLON{
	handleNewVariableName($2, NUMERICAL);
}
| characters_type_variable VARIABLE_NAME SEMICOLON { 
	handleNewVariableName($2, CHARACTERS);
}
| logical_type_variable VARIABLE_NAME SEMICOLON { 
	handleNewVariableName($2, LOGICAL);
}
| characters_type_variable VARIABLE_NAME '=' STRING_VALUE SEMICOLON{
	handleNewVariableName($2, CHARACTERS);
}
| numerical_type_variable VARIABLE_NAME '=' expression SEMICOLON {
	if (isAssigned) {
		handleNewVariableName($2, NUMERICAL); 
	}
	isAssigned = false;
}
| logical_type_variable VARIABLE_NAME '=' bool_value SEMICOLON{
	handleNewVariableName($2, LOGICAL); 
}
| characters_type_variable VARIABLE_NAME '=' VARIABLE_NAME SEMICOLON{
	if (handleVarNameInAssigning($4, CHARACTERS)) {
		handleNewVariableName($2, CHARACTERS); 
	}
}
;

assigning:  VARIABLE_NAME '=' STRING_VALUE SEMICOLON { 
	handleVarNameInAssigning($1, CHARACTERS);  
}
|  VARIABLE_NAME '=' VARIABLE_NAME SEMICOLON {
	validateTwoAssigningOperants($1, $3)
} 
|  VARIABLE_NAME '=' expression SEMICOLON {
	variableNumericalTypeExists($1); //only 'int' type is allowed
	isAssigned = false;
}
|  VARIABLE_NAME '=' bool_value SEMICOLON {
	if (handleVarNameInAssigning($1, LOGICAL)) {
		variableExists($1);
	}
}
|  VARIABLE_NAME SEMICOLON {
	variableExists($1);
}
;

numerical_type_variable:  DOUBLE
| INT
;

characters_type_variable:  STRING
;

logical_type_variable: BOOL;

bool_value: TRUE
| FALSE
;


/*
TODO
typ_zmiennej: numerical_type_variable
| characters_type_variable
;
*/

%%
void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main(void) {
	yyparse();
	return 0;
}