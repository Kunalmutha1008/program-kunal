// last occurance of character
#include<stdio.h>
#include<stdbool.h>
#define ERR_NOTFOUND -1
int chklastchar(char *str,char ch)
{
    int ipos = ERR_NOTFOUND;
    int icnt = 1;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            ipos = icnt;
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
    bret = chklast
    +
    
    char(arr,ivalue);
    if( bret == ERR_NOTFOUND)
    {
        printf("Ccharacter is not found \n");
    }
    else
    {
        printf("character is present at %d",bret);
    }
    return 0;
}