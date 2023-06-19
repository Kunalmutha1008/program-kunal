// check wheather character is present or not
#include<stdio.h>
#include<stdbool.h>
int charfreq(char *str,char ch)
{
    int icnt = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            icnt++;
        }
        str++;
    }
    return icnt;
}
int main()
{
    int iret = 0;
    char arr[20],ivalue;
    printf("enter string \n");
    scanf("%[^'\n']s",arr);
    printf("enter the character to search \n");
    scanf(" %c",&ivalue);
    iret = charfreq(arr,ivalue);
    printf("character is present %d  ",iret);
    return 0;
}