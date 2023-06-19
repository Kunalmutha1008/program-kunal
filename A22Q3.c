// count difference between small and capital character
#include<stdio.h>
int countdiff(char *str)
{
    int icnt1 = 0,icnt2 = 0, ans =0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            icnt1++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            icnt2++;
        }
        str++;
    }
    ans = icnt1 - icnt2;
    return ans;
}
int main()
{
    char arr[20];
    int iret = 0;
    printf("enter a string \n");
    scanf("%[^'\n']s",arr);
    iret = countdiff(arr);
    printf("%d",iret);

    return 0;
}