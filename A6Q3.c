#include<stdio.h>
int factorial(int ino)
{
    int ans = 1;
    for(int i=ino;i>=1;i--)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int ivalue = 0,iret = 0;
    printf("enter number\n");
    scanf("%d",&ivalue);

    iret = factorial(ivalue);

    printf("factorial of number %d",iret);

    return 0;
}