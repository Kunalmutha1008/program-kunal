// check wheather character is present or not
#include<stdio.h>
#include<stdbool.h>
bool chkchar(char *str,char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str != '\0')
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
    bool bret = false;
    char arr[20],ivalue;
    printf("enter string \n");
    scanf("%[^'\n']s",arr);
    printf("enter the character to search \n");
    scanf(" %c",&ivalue);
    bret = chkchar(arr,ivalue);
    if(bret == true)
    {
        printf("character is present \n");
    }
    else
    {
        printf("character is not present \n");
    }
    return 0;
}