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

[;] {yylval.stype = yytext[0]; return SEMICOLON; }
[0-9]+	{ yylval.dtype = atoi(yytext); return NUMBER; }
[-+*/()=^;]  return yytext[0];
\".*\" { yylval.stype = yytext[0]; return STRING_VALUE; }
[a-zA-Z_$][a-zA-Z_$0-9]* { yylval.stype=strdup(yytext); return VARIABLE_NAME; }
[\n]	return '\n';
%%