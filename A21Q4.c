#include<stdio.h>
#include<stdbool.h>

bool chkspecial(char ch)
{
    if(((ch >= 'a') && (ch <= 'z') )|| ( (ch >= 'A') && (ch <= 'Z')))
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char cvalue = '\0';
    bool bret = false;

    printf("enter the character \n");
    scanf("%c",&cvalue);
    bret = chkspecial(cvalue);
    if(bret == true)
    {
        printf("it is a special character");
    }
    else
    {
        printf("it is not a special charater");
    }
    return 0;
}