#include<stdio.h>
void odddisplay(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }
    int i=0;
    for(i=1;i<=ino;i++)
    {
        if(i%2 != 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int ivalue = 0;
    printf("enter a number\n");
    scanf("%d",&ivalue);
    odddisplay(ivalue);
    return 0;
}