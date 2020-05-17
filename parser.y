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
%token <stype>NAME
%token <stype>STRING_VALUE
%token <stype>RETURN
%token <stype>FOR
%token <stype>CLASS_DECL
%token <stype>VISIBILITY
%token <stype>DATA_ACCESS
%%
program: program instruction '\n'		{ printf("dobre wyr c++ \n"); }
	| error '\n'					{ yyerror("Obsluga bledu"); yyerrok;}
	|
	;
expression: NUMBER { 
	isAssigned = true;
}
|	NAME { 
	isAssigned = handleNameInAssigning($1, NUMERICAL, VAR); 
}
|   object_access {
	isAssigned = true;
}
|	expression'+'expression { }
|	expression'-'expression { }
|	expression'*'expression { }
|	expression'/'expression { }
|	function_usage { nameInTypeExistsInOrigin(getUsedFunctionName(), NUMERICAL, FUNC); setUsedFunctionName(NONE); }
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
| function_usage SEMICOLON { nameExistsInOrigin(getUsedFunctionName(), FUNC); setUsedFunctionName(NONE); }
;

block_of_code: {	
	//printf ("setFlagLocalVariable \n"); 
	startedBlockOfCode();
} '{' instruction '}' {
	//printf ("endedBlockOfCode \n"); 
	endedBlockOfCode();
}
;
function: numerical_type_variable  NAME { printf("numFuncBEg \n"); setLastFunctionType(NUMERICAL); handleFunctionHeader(); } '(' function_variables ')' block_of_code { 
	printf("numerical func \n"); 
	validateEndOfFunction();
	handleNewName($2, NUMERICAL, FUNC);
}
| characters_type_variable  NAME { printf("stringFuncBEg \n"); setLastFunctionType(CHARACTERS); handleFunctionHeader();} '(' function_variables ')' block_of_code { 
	printf("string func \n"); 
	handleNewName($2, CHARACTERS, FUNC);
}
| logical_type_variable  NAME { printf("boolFuncBEg \n"); setLastFunctionType(LOGICAL); handleFunctionHeader(); } '(' function_variables ')' block_of_code { 
	printf("bool func \n"); 
	handleNewName($2, LOGICAL, FUNC);
}
| void_type NAME { printf("voidFuncBEg \n"); setLastFunctionType(VOIDD); handleFunctionHeader();} '(' function_variables ')' block_of_code{
	printf("void func \n"); 
	handleNewName($2, VOIDD, FUNC);
}
;

function_usage: NAME  '(' function_parameters ')' { setUsedFunctionName($1) }
;

function_parameters: function_parameters ',' function_parameters
|	NAME { nameExistsInOrigin($1, VAR); }
|	variable_declaration
|	NUMBER
| 
;

function_variables: variable_declaration
| function_variables ',' function_variables
|
;

return_statement: RETURN { validateReturn(VOIDD) }
| RETURN NUMBER { validateReturn(NUMERICAL) }
| RETURN bool_value { validateReturn(LOGICAL) }
| RETURN STRING_VALUE { validateReturn(CHARACTERS) }
| RETURN NAME { validateReturnWithVarName($2) }
| RETURN expression { validateReturn(NUMERICAL) }
| 
;

class_declaration: CLASS_DECL NAME { setClassFlag(true); handleNewName($2, NONE, CLASS);} block_of_code {
	printf("class \n");
	setClassFlag(false);
	}
;

if_instruction: IF '(' comparison ')' single_instruction
| IF '(' comparison ')'single_instruction ELSE single_instruction
;

for_statement: FOR '(' { 
	handleForStatement();
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

for_third_arg: NAME increase_decrease
| increase_decrease NAME
| for_third_arg ',' for_third_arg
| assigning
|
;

 increase_decrease: '+''+'
 | '-''-';

variable_declaration: numerical_type_variable NAME {
	handleNewName($2, NUMERICAL, VAR);
}
| characters_type_variable NAME { 
	handleNewName($2, CHARACTERS, VAR);
}
| logical_type_variable NAME { 
	handleNewName($2, LOGICAL, VAR);
}
| NAME NAME {
	handleNewName($2, $1, CLASS);
}
| characters_type_variable NAME '=' STRING_VALUE {
	handleNewName($2, CHARACTERS, VAR);
}
| characters_type_variable NAME '=' function_usage {
	handleNewName($2, CHARACTERS, VAR);
	nameInTypeExistsInOrigin(getUsedFunctionName(), CHARACTERS, FUNC); setUsedFunctionName(NONE);
}
| characters_type_variable NAME '=' object_access {
	handleNewName($2, CHARACTERS, VAR);
}
| numerical_type_variable NAME '=' expression {
	if (isAssigned) {
		handleNewName($2, NUMERICAL, VAR); 
	}
	isAssigned = false;
}
| logical_type_variable NAME '=' bool_value {
	handleNewName($2, LOGICAL, VAR); 
}
| logical_type_variable NAME '=' object_access {
	handleNewName($2, LOGICAL, VAR); 
}
| logical_type_variable NAME '=' function_usage {
	handleNewName($2, LOGICAL, VAR); 
	nameInTypeExistsInOrigin(getUsedFunctionName(), LOGICAL, FUNC); setUsedFunctionName(NONE);
}
| logical_type_variable NAME '=' NAME {
	if (handleNameInAssigning($4, LOGICAL, VAR)) {
		handleNewName($2, LOGICAL, VAR); 
	}
}
| characters_type_variable NAME '=' NAME {
	if (handleNameInAssigning($4, CHARACTERS, VAR)) {
		handleNewName($2, CHARACTERS, VAR); 
	}
}
| NAME NAME '=' NAME {
	if (handleNameInAssigning($4, $1, VAR)) {
		handleNewName($2, $1, CLASS);
	}
}
| NAME NAME '=' object_access {
	handleNewName($2, $1, CLASS);
}
;

assigning:  NAME '=' STRING_VALUE { 
	handleNameInAssigning($1, CHARACTERS, VAR);  
}
|  NAME '=' NAME {
	validateTwoAssigningOperants($1, $3, VAR)
} 
|  NAME '=' expression {
	nameInTypeExistsInOrigin($1, NUMERICAL, VAR); //only 'int' type is allowed
	isAssigned = false;
}
|  NAME '=' bool_value {
	if (handleNameInAssigning($1, LOGICAL, VAR)) {
		nameExistsInOrigin($1, VAR);
	}
}
| NAME '=' object_access
| object_access '=' object_access
| object_access '=' NAME
| object_access
| NAME {
	nameExistsInOrigin($1, VAR);
}
;

comparison:  equal_comparision
| not_equal_comparision
|  NAME {
	nameInTypeExistsInOrigin($1, LOGICAL, VAR); //only 'bool' type is allowed
}
| '!' NAME {
	nameInTypeExistsInOrigin($2, LOGICAL, VAR); //only 'bool' type is allowed
}
| object_access
| bool_value
;

equal_comparision:
NAME'=''='STRING_VALUE { 
	handleNameInAssigning($1, CHARACTERS, VAR);
}
|  NAME'=''='NAME {
	validateTwoAssigningOperants($1, $4, VAR)
} 
|  function_usage '=''=' function_usage
|  object_access'=''='object_access
|  object_access'=''='NAME
|  NAME'=''='bool_value {
	if (handleNameInAssigning($1, LOGICAL, VAR)) {
		nameExistsInOrigin($1, VAR);
	}
}

//|  NAME'=''='expression  { 
//	nameInTypeExistsInOrigin($1, NUMERICAL, VAR); //only 'int' type is allowed!!!
//	isAssigned = false;
//}

not_equal_comparision: 
NAME'!''='STRING_VALUE { 
	handleNameInAssigning($1, CHARACTERS, VAR);
}
|  NAME'!''='NAME {
	validateTwoAssigningOperants($1, $4, VAR)
} 
|  object_access'!''='object_access
|  object_access'!''='NAME
|  NAME'!''='bool_value {
	if (handleNameInAssigning($1, LOGICAL, VAR)) {
		nameExistsInOrigin($1, VAR);
	}
}
//|  NAME'!''='expression  { 
//	nameInTypeExistsInOrigin($1, NUMERICAL, VAR); //only 'int' type is allowed!!!
//	isAssigned = false;
//}

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

object_access: DATA_ACCESS {
	validateExistenceAndIsNotPrimitve(getNameFromDataAccess($1));
}
;

%%
void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main(void) {
	initStack();
	yyparse();
	return 0;
}