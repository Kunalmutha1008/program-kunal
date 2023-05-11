#include<stdio.h>
void display(int ino)
{
    int i=0;
    if(i<0)         //updator for negative number
    {
        i = -i;
    }
    for(i=1;i<=ino;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int ivalue=0;
    printf("enter the frequency of number\n");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}