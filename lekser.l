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
if { return IF; }
else { return ELSE; }
void { return VOID; }
return { return RETURN; }
for { return FOR; }
class { return CLASS_DECL; }
public: { return VISIBILITY; }
private: { return VISIBILITY; }
protected: { return VISIBILITY; }
#include \"[a-z]+.h\" { yylval.stype=strdup(yytext); return INCLUDE; }

[;] {yylval.stype = yytext[0]; return SEMICOLON; }
[0-9]+	{ yylval.dtype = atoi(yytext); return NUMBER; }
[-+*/()=^;,{}<>!]  return yytext[0];
\".*\" { yylval.stype = yytext[0]; return STRING_VALUE; }
[a-zA-Z_$][a-zA-Z_$0-9]*"."[a-zA-Z_$][a-zA-Z_$0-9()*]* { yylval.stype=strdup(yytext); return DATA_ACCESS; }
[a-zA-Z_$][a-zA-Z_$0-9]* { yylval.stype=strdup(yytext); return NAME; }
[\n]	return '\n';
%%