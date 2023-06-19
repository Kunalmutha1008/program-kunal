// display -5  -4   -3  -2  -1  0   1   2   3   4   5   when input is 5
#include<stdio.h>
void display(int ino)
{
    int i=0;
    for(i=-ino;i<=ino;i++)
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