// count no of small character
#include<stdio.h>
int countsmall(char *str)
{
    int icnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            icnt++;
        }
        str++;
    }
    return icnt;
}
int main()
{
    char arr[20];
    int iret = 0;
    printf("enter a string \n");
    scanf("%[^'\n']s",arr);
    iret = countsmall(arr);
    printf("%d",iret);

    return 0;
}