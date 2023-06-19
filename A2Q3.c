#include<stdio.h>
void display(int ino)
{
    if(ino<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int ivalue = 0;
    printf("enter a number ");
    scanf("%d",&ivalue);

    display(ivalue);

    return 0;
}