%option noyywrap

%{
	#include <stdlib.h> 
	#include "parser.h"
	YY_BUFFER_STATE stos[100];
    int nBufor = 0;
	int line=0;
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
"#include "\"[a-zA-Z]+".h"\" { 
yylval.stype=strdup(yytext); 
//return INCLUDE; 
		char* name = handleInclude(strdup(yytext));
		stos[nBufor++] = YY_CURRENT_BUFFER;  
		yyin = fopen(name, "r");     
		yy_switch_to_buffer(yy_create_buffer(yyin, YY_BUF_SIZE));
		//BEGIN(INITIAL);    
}
"#include <"[a-zA-Z]+".h>" { }

[;] {yylval.stype = yytext[0]; return SEMICOLON; }
[0-9]+	{ yylval.dtype = atoi(yytext); return NUMBER; }
[-+*/()=^;,{}<>!]  return yytext[0];
\".*\" { yylval.stype = yytext[0]; return STRING_VALUE; }
[a-zA-Z_$][a-zA-Z_$0-9]*"."[a-zA-Z_$][a-zA-Z_$0-9()*]* { yylval.stype=strdup(yytext); return DATA_ACCESS; }
[a-zA-Z_$][a-zA-Z_$0-9]* { yylval.stype=strdup(yytext); return NAME; }
[\n]	{ incrementLineCount(); return '\n';}

<<EOF>>   {    
	if(nBufor == 0)    
	{     
		yyterminate();   
	}    
	 else   
	{    
		yy_delete_buffer(YY_CURRENT_BUFFER);  
		yy_switch_to_buffer(stos[--nBufor]); 
	}   
} 
%%