// table of a number
#include<stdio.h>
void table(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }
    int ans = 0;
    for(int i=1;i<=10;i++)
    {
        ans = ino*i;
        printf("%d\t",ans);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number\n");
    scanf("%d",&ivalue);

    table(ivalue);
    return 0;
}