
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

  zmienna = typ nazwa_zmiennej

	typ = "char" "int"
	nazwa zmiennej = regexp
	^[a-zA-Z_$][a-zA-Z_$0-9]*$
 
*/


%option noyywrap

%{
	#include <stdlib.h> 
	#include "parser.h"
%}
%%
double { return DOUBLE; }
string { return STRING; }
int { return INT; }
bool { return BOOL; }
true { return TRUE; }
false { return FALSE; }
[0-9]+	{ yylval.dtype = atoi(yytext); return LICZBA; }
[-+*/()=^;]  return yytext[0];
\".*\" { yylval.stype = yytext[0]; return WARTOSC_STRING; }
[a-zA-Z_$][a-zA-Z_$0-9]* { yylval.stype=strdup(yytext); return NAZWA_ZMIENNEJ; }
[\n]	return '\n';
%%