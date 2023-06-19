#include<stdio.h>
void multipledisplay(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }
    int i=0;
    int ans = 0;
    for(i=1;i<=5;i++)
    {
        ans = ino * i;
        printf("%d\t",ans);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter a number\n");
    scanf("%d",&ivalue);
    multipledisplay(ivalue);
    return 0;
}