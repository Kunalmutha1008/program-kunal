#include<stdio.h>

void display(int ino)
{
    int icnt = 0;
    for(icnt = 1;icnt<=ino;icnt++)
    {
        printf("*");
    }
}
int main()
{
    int ivalue = 0;
    printf("enter a value");
    scanf("%d",&ivalue);
    display(ivalue);

    return 0;
}
