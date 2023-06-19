#include<stdio.h>
void tablerev(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }
    int ans = 0;
    for(int i=10;i>=1;i--)
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

    tablerev(ivalue);
    return 0;
}