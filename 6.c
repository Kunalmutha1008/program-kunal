#include<stdio.h>
void display(int ino)
{
    int i=0;
    if(i<0)         //updator
    {
        i = -i;
    }
    for(i=1;i<=ino;i++)
    {
        printf("jay ganesh..\n");
    }
}
int main()
{
    int ivalue=0;
    printf("enter the frequency \n");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}