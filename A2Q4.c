#include<stdio.h>

void display(int ino,int ifrequency)
{
    int i=0;
    for(i=0;i<ifrequency;i++)
    {
        printf("%d\t",ino);
    }
}
int main()
{
    int ivalue = 0;
    int icount = 0;
    printf("enter a number");
    scanf("%d",&ivalue);

    printf("enter frequency");
    scanf("%d",&icount);
    display(ivalue,icount);

    return 0;
}