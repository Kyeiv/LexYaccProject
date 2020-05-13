%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	#include <stdbool.h>
	#include "nameTablesUtils.h"
	
	#define NUMERICAL "numerical"
	#define CHARACTERS "char"
	#define LOGICAL "bool"
	#define VOIDD "void"
	#define NONE "none"

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
%token <stype>FOR
%token <stype>CLASS_DECL
%token <stype>VISIBILITY
%type <stype>function_name
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
| return_statement SEMICOLON
| for_statement
| class_declaration
| VISIBILITY { checkIfInClass(); }
;

block_of_code: {	
	//printf ("setFlagLocalVariable \n"); 
	setLocalVariableFlag();
} '{' instruction '}' {
	//printf ("endedBlockOfCode \n"); 
	endedBlockOfCode();
}
;
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
	setLocalVariableFlag();
	}
;

function_variables: variable_declaration
| function_variables ',' function_variables
|
;

return_statement: RETURN { validateReturn(VOIDD) }
| RETURN NUMBER { validateReturn(NUMERICAL) }
| RETURN bool_value { validateReturn(LOGICAL) }
| RETURN STRING_VALUE { validateReturn(CHARACTERS) }
| RETURN VARIABLE_NAME { validateReturnWithVarName($2) }
| 
;

class_declaration: CLASS_DECL VARIABLE_NAME { setClassFlag(true); handleNewName($2, NONE, CLASS);} block_of_code {
	printf("class \n");
	setClassFlag(false);
	}
;

if_instruction: IF '(' comparison ')' single_instruction
| IF '(' comparison ')'single_instruction ELSE single_instruction
;

for_statement: FOR '(' { 
	//printf ("for statement \n"); 
	setLocalVariableFlag();
	}
	for_first_arg SEMICOLON for_second_arg SEMICOLON for_third_arg ')' block_of_code


for_first_arg: function_variables 
| assigning
| for_first_arg ',' for_first_arg
|;

for_second_arg: expression op expression
| expression op expression ',' expression op expression
|;

op: '>'
| '<'
| '!''='
| '<''='
| '>''=';

for_third_arg: VARIABLE_NAME increase_decrease
| increase_decrease VARIABLE_NAME
| for_third_arg ',' for_third_arg
| assigning
|
;

 increase_decrease: '+''+'
 | '-''-';

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
	nameInTypeExistsInOrigin($1, NUMERICAL, VAR); //only 'int' type is allowed
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
	nameExists($1, NUMERICAL, VAR); //only 'int' type is allowed
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