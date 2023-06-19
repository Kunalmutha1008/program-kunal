// count no of capital character
#include<stdio.h>
int countcapital(char *str)
{
    int icnt = 0;
    // filter
    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iret = countcapital(arr);
    printf("%d",iret);
    return 0;

}