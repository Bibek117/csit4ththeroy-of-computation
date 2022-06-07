//write a program tto validate c identifiers and keywords
#include<stdio.h>
#include<string.h>
	int is_identifier(char s[]){
	    if(is_keyword(s)){
            return 1;
	    }
		if ((s[0] == '0' || s[0] == '1' || s[0] == '2' ||
        s[0] == '3' || s[0] == '4' || s[0] == '5' ||
        s[0] == '6' || s[0] == '7' || s[0] == '8' ||
        s[0] == '9' || s[0] == ' ' || s[0] == '+' || s[0]== '-' || s[0] == '*' ||
        s[0] == '/' || s[0]== ',' || s[0] == ';' || s[0] == '>' ||
        s[0] == '<' || s[0] == '=' || s[0] == '(' || s[0] == ')' ||
        s[0]== '[' || s[0] == ']' || s[0] == '{' || s[0] == '}'||s[0]=='@')){
            return 1;
        }else{
           return 0;
        }
	}
	int is_keyword(char s[])
{
    if (!strcmp(s, "if") || !strcmp(s, "else") ||
        !strcmp(s, "while") || !strcmp(s, "do") ||
        !strcmp(s, "break") ||
         !strcmp(s, "continue") || !strcmp(s, "int")
        || !strcmp(s, "double") || !strcmp(s, "float")
        || !strcmp(s, "return") || !strcmp(s, "char")
        || !strcmp(s, "case") || !strcmp(s, "char")
        || !strcmp(s, "sizeof") || !strcmp(s, "long")
        || !strcmp(s, "short") || !strcmp(s, "typedef")
        || !strcmp(s, "switch") || !strcmp(s, "unsigned")
        || !strcmp(s, "void") || !strcmp(s, "static")
        || !strcmp(s, "struct") || !strcmp(s, "goto")|| !strcmp(s, "enum")|| !strcmp(s, "union")){
         return 1;
        }else{
         return 0;
        }
}

int main(){
	int a,b;
	char str1[50];
	char str2[50];
	printf("\n Enter the identifier to check :");
	gets(str1);
	a = is_identifier(str1);
	if(a){
        printf("The input string : %s is invalid identifiers",str1);
	}else{
	   printf("Valid Identifier");
	}
	printf("\n Enter the keyword to check :");
	gets(str2);
	b = is_keyword(str2);

	if(b){
        printf("The input string : %s is valid keyword",str2);
	}else{
	   printf("Invalid key word");
	}

    return 0;
}
