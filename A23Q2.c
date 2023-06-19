#include<stdio.h>
void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
            printf("%c",str);
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("enter string \n");
    scanf("%[^'\n']s",arr);
    strlwrx(arr);
    printf("modified string is %s",arr);

    return 0;
}