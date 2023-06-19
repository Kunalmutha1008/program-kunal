// count difference between small and capital character
#include<stdio.h>
int reverse(char *str)
{
    int ilength = 0;
    while(*str != '\0')
    {
        str++;
        ilength++;
    }
    str--;
    for(;ilength != 0;ilength--)
    {
        printf("%c",str);
        str--;
    }
    //printf("\0");
}
int main()
{
    char arr[20];
    int iret = 0;
    printf("enter a string \n");
    scanf("%[^'\n']s",arr);
    reverse(arr);
    return 0;
}