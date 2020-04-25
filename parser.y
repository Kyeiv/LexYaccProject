
/**************************************
  IMPORTANT!
  
  Make sure the folder you have unzipped the files has NO WHITE CHARs in path!

  Make sure your compiler knows where to find  
  flex and yacc applications!
  1. Right click on the name of your project in Solution Explorer.
  2. Click Properties.
  3. In Configuration Properties click VC++ Directories
  4. In right window edit Executable Directories -- add the path
     to folder /gnu/bin. 
  5. That's all folks!
 
*/

%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	#include "variableNamesUtils.h"
	void yyerror(char *s);
	int yylex();
	extern FILE* yyin;
%}

%union SUPER_TYPE
{
	double dtype;
	char* stype;
}
//%left '+' '='
//%left '*' '/'
//%right '^'
//%left NEG
%token <dtype>LICZBA
%token <stype>DOUBLE
%token <stype>STRING
%token <stype>TRUE
%token <stype>FALSE
%token <stype>INT
%token <stype>BOOL
%token <stype>NAZWA_ZMIENNEJ
%token <stype>WARTOSC_STRING
%type  <stype>typ_zmiennej_liczbowej
%%
program: program instrukcja '\n'		{ printf("dobre wyr c++ \n"); }
	| error '\n'					{ yyerror("Obsluga bledu"); yyerrok;}
	|
	;
wyrazenie: LICZBA {  }
|	NAZWA_ZMIENNEJ { handleVarNameInAssigning($1, 0); }
|	wyrazenie'+'wyrazenie { }
|	wyrazenie'-'wyrazenie { }
|	wyrazenie'*'wyrazenie { }
|	wyrazenie'/'wyrazenie { }
|
;

instrukcja: deklaracja_zmiennej ';'
| przypisanie ';'
| instrukcja instrukcja
;

deklaracja_zmiennej: typ_zmiennej_liczbowej NAZWA_ZMIENNEJ {handleNewVariableName($2, 0);}
| typ_zmiennej_lancuchowej NAZWA_ZMIENNEJ  { handleNewVariableName($2, 1);}
| typ_zmiennej_logicznej NAZWA_ZMIENNEJ { handleNewVariableName($2, 2); }
| typ_zmiennej_lancuchowej NAZWA_ZMIENNEJ '=' WARTOSC_STRING {handleNewVariableName($2, 1);}
| typ_zmiennej_liczbowej NAZWA_ZMIENNEJ '=' wyrazenie {
	handleNewVariableName($2, 0); 
}
| typ_zmiennej_logicznej NAZWA_ZMIENNEJ '=' wartosc_bool {
	handleNewVariableName($2, 2); 
}
| typ_zmiennej_lancuchowej NAZWA_ZMIENNEJ '=' NAZWA_ZMIENNEJ {
	handleNewVariableName($2, 1); 
	handleVarNameInAssigning($4, 1); 
}
;

przypisanie:  NAZWA_ZMIENNEJ '=' WARTOSC_STRING { handleVarNameInAssigning($1, 1);  }
/*|  NAZWA_ZMIENNEJ '=' NAZWA_ZMIENNEJ {validateTwoAssigningOperants($1, $3)} */
|  NAZWA_ZMIENNEJ '=' wyrazenie { }
|  NAZWA_ZMIENNEJ '=' wartosc_bool { }
|  NAZWA_ZMIENNEJ
;

typ_zmiennej_liczbowej:  DOUBLE
| INT
;

typ_zmiennej_lancuchowej:  STRING
;

wartosc_bool: TRUE
| FALSE
;

typ_zmiennej_logicznej: BOOL;

/*
TODO
typ_zmiennej: typ_zmiennej_liczbowej
| typ_zmiennej_lancuchowej
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