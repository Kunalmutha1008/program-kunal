// check wheather input is alphabet or not

#include<stdio.h>
#include<stdbool.h>

bool chkalphabet(char ch)
{
    if((ch >='0' && ch <='9'))
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
        printf("it is a digit \n");
    }
    else
    {
        printf("it is not a digit \n");
    }
    return 0;
}