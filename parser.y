%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	#include <stdbool.h>
	#include "nameTablesUtils.h"
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
%token <stype>VOID
%token <stype>STRING
%token <stype>TRUE
%token <stype>FALSE
%token <stype>INT
%token <stype>BOOL
%token <stype>IF
%token <stype>ELSE
%token <stype>SEMICOLON
%token <stype>VARIABLE_NAME
%token <stype>STRING_VALUE
%token <stype>RETURN
%type<stype> function_name
%%
program: program instruction '\n'		{ printf("dobre wyr c++ \n"); }
	| error '\n'					{ yyerror("Obsluga bledu"); yyerrok;}
	|
	;
expression: NUMBER { 
	isAssigned = true;
}
|	VARIABLE_NAME { 
	isAssigned = handleNameInAssigning($1, NUMERICAL, VAR); 
}
|	expression'+'expression { }
|	expression'-'expression { }
|	expression'*'expression { }
|	expression'/'expression { }
|
;

instruction: single_instruction
| instruction instruction
;

single_instruction: if_instruction
| block_of_code
| variable_declaration SEMICOLON
| assigning SEMICOLON
| function
| return_statement
;

block_of_code: {	
	//printf ("setFlagLocalVariable \n"); 
	setLocalVariableFlag();
} '{' instruction '}' {
	//printf ("endedBlockOfCode \n"); 
	endedBlockOfCode();
}
;
for
function: numerical_type_variable  function_name { printf("numFuncBEg \n"); setLastFunctionType(NUMERICAL); } '(' function_variables ')' block_of_code { 
	printf("numerical func \n"); 
	validateEndOfFunction();
	handleNewName($2, NUMERICAL, FUNC);
}
| characters_type_variable  function_name { printf("stringFuncBEg \n"); setLastFunctionType(CHARACTERS); } '(' function_variables ')' block_of_code { 
	printf("string func \n"); 
	handleNewName($2, CHARACTERS, FUNC);
}
| logical_type_variable  function_name { printf("boolFuncBEg \n"); setLastFunctionType(LOGICAL); } '(' function_variables ')' block_of_code { 
	printf("bool func \n"); 
	handleNewName($2, LOGICAL, FUNC);
}
| void_type function_name { printf("voidFuncBEg \n"); setLastFunctionType(VOIDD); } '(' function_variables ')' block_of_code{
	printf("void func \n"); 
	handleNewName($2, VOIDD, FUNC);
}
;

function_name: VARIABLE_NAME {
	//printf("variable_declaration!!!\n"); 
	setLocalVariableFlag();}
;

function_variables: variable_declaration
| function_variables ',' function_variables
|
;

return_statement: RETURN SEMICOLON { validateReturn(VOIDD) }
| RETURN NUMBER SEMICOLON { validateReturn(NUMERICAL) }
| RETURN bool_value SEMICOLON { validateReturn(BOOL) }
| RETURN STRING_VALUE SEMICOLON { validateReturn(CHARACTERS) }
| 
;


if_instruction: IF '(' comparison ')' single_instruction
| IF '(' comparison ')'single_instruction ELSE single_instruction
;

variable_declaration: numerical_type_variable VARIABLE_NAME {
	handleNewName($2, NUMERICAL, VAR);
}
| characters_type_variable VARIABLE_NAME { 
	handleNewName($2, CHARACTERS, VAR);
}
| logical_type_variable VARIABLE_NAME { 
	handleNewName($2, LOGICAL, VAR);
}
| characters_type_variable VARIABLE_NAME '=' STRING_VALUE {
	handleNewName($2, CHARACTERS, VAR);
}
| numerical_type_variable VARIABLE_NAME '=' expression {
	if (isAssigned) {
		handleNewName($2, NUMERICAL, VAR); 
	}
	isAssigned = false;
}
| logical_type_variable VARIABLE_NAME '=' bool_value {
	handleNewName($2, LOGICAL, VAR); 
}
| logical_type_variable VARIABLE_NAME '=' VARIABLE_NAME {
	if (handleNameInAssigning($4, LOGICAL, VAR)) {
		handleNewName($2, LOGICAL, VAR); 
	}
}
| characters_type_variable VARIABLE_NAME '=' VARIABLE_NAME {
	if (handleNameInAssigning($4, CHARACTERS, VAR)) {
		handleNewName($2, CHARACTERS, VAR); 
	}
}
;

assigning:  VARIABLE_NAME '=' STRING_VALUE { 
	handleNameInAssigning($1, CHARACTERS, VAR);  
}
|  VARIABLE_NAME '=' VARIABLE_NAME {
	validateTwoAssigningOperants($1, $3, VAR)
} 
|  VARIABLE_NAME '=' expression {
	nameInNumericalTypeExists($1, VAR); //only 'int' type is allowed
	isAssigned = false;
}
|  VARIABLE_NAME '=' bool_value {
	if (handleNameInAssigning($1, LOGICAL, VAR)) {
		nameExistsInOrigin($1, VAR);
	}
}
|  VARIABLE_NAME {
	nameExistsInOrigin($1, VAR);
}
;

comparison:  VARIABLE_NAME'=''='STRING_VALUE { 
	handleNameInAssigning($1, CHARACTERS, VAR);
}
|  VARIABLE_NAME'=''='VARIABLE_NAME {
	validateTwoAssigningOperants($1, $4, VAR)
} 
|  VARIABLE_NAME'=''='expression  {
	nameInNumericalTypeExists($1, VAR); //only 'int' type is allowed
	isAssigned = false;
}
|  VARIABLE_NAME'=''='bool_value {
	if (handleNameInAssigning($1, LOGICAL, VAR)) {
		nameExistsInOrigin($1, VAR);
	}
}
|  VARIABLE_NAME {
	nameExistsInOrigin($1, VAR);
}
| bool_value
;

numerical_type_variable:  DOUBLE
| INT
;

characters_type_variable:  STRING
;

logical_type_variable: BOOL;

void_type: VOID;

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