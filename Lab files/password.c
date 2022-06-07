//to validate a password
#include<stdio.h>
#include<string.h>
int validate_password(char p[]);
int main()
{
    int a;
    char password[100];
    up:
    printf("\nEnter a password : ");
    scanf(" %s",password);
    if(strlen(password) <8){
        printf("Please enter a password 8 or more characteres long");
        goto up;
    }
    a = validate_password(password);
    if(a)
    {
        printf("The entered password is validated : %s",password);
    }else
    {
        printf("Enter a valid password with at least one uppercase,one smallcase,one  special character($,@,!,*%) and one numeric value");
        goto up;
    }
    return 0;
}
int validate_password(char p[])
{
    int i,flag_small = 0,flag_big = 0,flag_number = 0,flag_special =0;
    for(i=0;i<strlen(p);i++)
    {
        if(p[i] >= 'a' && p[i] <= 'z'){
            flag_small = 1;
        }else if(p[i] >= 'A' && p[i] <='Z')
        {
            flag_big = 1;
        }else if(p[i] >='0' && p[i] <= '9')
        {
            flag_number =1;
        }else if(p[i] == '$' || p[i] == '%' || p[i] == '@' || p[i] == '*' || p[i] == '!')
        {
            flag_special = 1;
        }
    }
    if(flag_small && flag_big && flag_number  && flag_special )
    {
        return 1;
    }else{
     return 0;
    }
}
