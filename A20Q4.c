// check wheather input is alphabet or not

#include<stdio.h>
#include<stdbool.h>

bool chksmall(char ch)
{
    if((ch >='a' && ch <='z'))
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

    bret = chksmall(cvalue);
    if(bret == true)
    {
        printf("it is a small character \n");
    }
    else
    {
        printf("it is not a small character \n");
    }
    return 0;
}