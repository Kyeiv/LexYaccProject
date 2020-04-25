
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
	//#include <string.h>
	void yyerror(char *s);
	int yylex();
	//int zmienne ['z' - 'a'];
	extern FILE* yyin;
	char* zmienneLiczbowe[1000];
	int rozmiarZmienneLiczbowe = 0;

	int czyBylo(char* wartosc)
	{
		for(int i = 0; i < rozmiarZmienneLiczbowe; i++)
		{
			char* currString = zmienneLiczbowe[i];
			if(strcmp(currString,wartosc) == 0)
			{
				printf("ERROR \n");
				return 1;
			}
		}
		return 0;
	}
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
%%
program: program instrukcja '\n'		{ printf("dobre wyr c++ \n"); }
	| error '\n'					{ yyerror("Obsluga bledu"); yyerrok;}
	|
	;
wyrazenie: LICZBA {  }
|	NAZWA_ZMIENNEJ
|	wyrazenie'+'wyrazenie {  }
|	wyrazenie'-'wyrazenie { }
|	wyrazenie'*'wyrazenie { }
|	wyrazenie'/'wyrazenie { }
|
;

instrukcja: deklaracja_zmiennej ';'
| instrukcja instrukcja
;

deklaracja_zmiennej: typ_zmiennej_liczbowej NAZWA_ZMIENNEJ { 
	char* value = yylval.stype;

	if(czyBylo(value) == 0)
	{
		zmienneLiczbowe[rozmiarZmienneLiczbowe] = value;
		printf("wartosc zmiennej: %s znakkonca \n", zmienneLiczbowe[rozmiarZmienneLiczbowe]);
		rozmiarZmienneLiczbowe++;
	}
}
| typ_zmiennej_lancuchowej NAZWA_ZMIENNEJ { }
| typ_zmiennej_logicznej NAZWA_ZMIENNEJ { }
| typ_zmiennej_lancuchowej NAZWA_ZMIENNEJ '=' WARTOSC_STRING { }
| typ_zmiennej_liczbowej NAZWA_ZMIENNEJ '=' wyrazenie { }
| typ_zmiennej_logicznej NAZWA_ZMIENNEJ '=' wartosc_bool { }
| typ_zmiennej_logicznej NAZWA_ZMIENNEJ '=' wyrazenie { }
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