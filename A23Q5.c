// count white space in the string

#include<stdio.h>
int countwhitespace(char *str)
{
    int icnt = 0;
    while (*str != '\0')
    {
        if((*str == ' '))
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
    char arr[20];
    printf("enter string \n");
    scanf("%[^'\n']s",arr);
    iret = countwhitespace(arr);
    printf("whitespace in string is %d",iret);

    return 0;
}