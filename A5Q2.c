#include<stdio.h>
void display(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }
    int i=0;
    for(i=1;i<=ino;i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter a number\n");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}