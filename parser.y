%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	#include <stdbool.h>
	#include "nameTablesUtils.h"
	
	#define NUMERICAL "numerical"
	#define CHARACTERS "string"
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
%token <stype>INCLUDE
%%
program: instruction { 
	if (!getErrorFlag()) {
		printf("Program correct, no errors detected\n"); 
	}
}
	| error '\n' {
		setErrorFlag();
		printf("SYNTAX ERROR! In file '%s', line: %d\n", getCurrentFileName(), getCurrentLines());
		}
	|
	;


instruction: single_instruction
| instruction instruction
| '\n'
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
| INCLUDE { handleInclude($1); }
;

block_of_code: {	
	startedBlockOfCode();
} '{' instruction '}' {
	endedBlockOfCode();
}
;
function: numerical_type_variable  NAME { setLastFunctionType(NUMERICAL); handleFunctionHeader(); } '(' function_variables ')' block_of_code { 
	validateEndOfFunction();	
	handleNewName($2, NUMERICAL, FUNC);
}
| characters_type_variable  NAME { setLastFunctionType(CHARACTERS); handleFunctionHeader();} '(' function_variables ')' block_of_code { 
	handleNewName($2, CHARACTERS, FUNC);
}
| logical_type_variable  NAME { setLastFunctionType(LOGICAL); handleFunctionHeader(); } '(' function_variables ')' block_of_code { 
	handleNewName($2, LOGICAL, FUNC);
}
| void_type NAME { setLastFunctionType(VOIDD); handleFunctionHeader();} '(' function_variables ')' block_of_code{
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
;

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
| '>''='
| '=''='
;

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

comparison:  comparison_expressions
|  NAME {
	nameInTypeExistsInOrigin($1, LOGICAL, VAR); //only 'bool' type is allowed
}
| '!' NAME {
	nameInTypeExistsInOrigin($2, LOGICAL, VAR); //only 'bool' type is allowed
}
| object_access
| bool_value
;

comparison_expressions:
NAME op STRING_VALUE { 
	handleNameInAssigning($1, CHARACTERS, VAR);
}
| NAME op NAME {
	validateTwoAssigningOperants($1, $3, VAR)
} 
|  function_usage op function_usage
|  object_access op object_access
|  object_access op NAME
|  NAME'=''='bool_value {
	if (handleNameInAssigning($1, LOGICAL, VAR)) {
		nameExistsInOrigin($1, VAR);
	}
}
|  NAME op expression  { 
	nameInTypeExistsInOrigin($1, NUMERICAL, VAR); //only 'int' type is allowed!!!
	isAssigned = false;
}
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

object_access: DATA_ACCESS {
	validateExistenceAndIsNotPrimitve(getNameFromDataAccess($1));
}
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
|	function_usage { nameInTypeExistsInOrigin(getUsedFunctionName(), NUMERICAL, FUNC); setUsedFunctionName(NONE); isAssigned=true; }
;

%%
void yyerror(char* s) {}

int main(void) {
	char* initFileName = "src.cpp";
	initStack(initFileName);
	yyin = fopen(concat(getPath(), initFileName), "r");
	yyparse();
	cleanStack();
	return 0;
}