// check wheather input is alphabet or not

#include<stdio.h>
#include<stdbool.h>

bool chkalphabet(char ch)
{
    if((ch >='a' && ch <='z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cvalue='\0';
    bool bret = false;

    printf("enter the character \n");
    scanf("%c",&cvalue);

    bret = chkalphabet(cvalue);
    if(bret == true)
    {
        printf("it is a character \n");
    }
    else
    {
        printf("it is not a character \n");
    }
    return 0;
}