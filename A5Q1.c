#include<stdio.h>

void pattern(int ino)
{
    int i=0;
    for(i=1;i<=ino;i++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int ivalue = 0;
    printf("enter a number\n");
    scanf("%d",&ivalue);
    pattern(ivalue);
    return 0;
}