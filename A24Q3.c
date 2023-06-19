// first occurance of character 
#include<stdio.h>
#include<stdbool.h>
int chkfirstchar(char *str,char ch)
{
    int ipos = 0,icnt = 1;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            ipos = icnt;
            break;
        }
        icnt++;
        str++;
    }
    return ipos;
}
int main()
{
    int bret = 0;
    char arr[20],ivalue;
    printf("enter string \n");
    scanf("%[^'\n']s",arr);
    printf("enter the character to search \n");
    scanf(" %c",&ivalue);
    bret = chkfirstchar(arr,ivalue);
    printf("character is present at %d",bret);
    return 0;
}