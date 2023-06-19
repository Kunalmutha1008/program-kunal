// display digit

#include<stdio.h>
void displaydigit(char *str)
{
    while (*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%d\n",str);
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("enter string \n");
    scanf("%[^'\n']s",arr);
    displaydigit(arr);
    return 0;
}