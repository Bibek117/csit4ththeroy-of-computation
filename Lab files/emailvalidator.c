//email validator
#include<stdio.h>
#include<string.h>
int email_validator(char email[]);
int main()
{
    char email[100];
    up:
    printf("\nEnter a email to check : ");
    scanf(" %s",email);
    if(strlen(email) <6){
        printf("Invalid email!!Shorter the standard email");
        goto up;
    }
    email_validator(email);
    return 0;
}
int email_validator(char email[])
{
    int attherate_position,dot_position,i,at_true = 0,dot_true = 0,diff,diff_last,pos_true = 0;
    for(i=0;i<strlen(email);i++)
    {
        if(email[i] == '@')
        {
            at_true =1;
            attherate_position = i;
        }
    }
    for(i=attherate_position;i<strlen(email);i++)
    {
        if(email[i] == '.')
        {
            dot_true =1;
            dot_position= i;
        }
    }
    diff_last = strlen(email) - (dot_position+1);
    diff = dot_position-attherate_position;
    if(diff>1 && diff_last >=2 &&attherate_position >0)
    {
        pos_true = 1;
    }
    if(pos_true && at_true && dot_true)
    {
        printf("\nValid email : %s",email);
    }else
    {
        printf("\nInvalid email");
    }
}
