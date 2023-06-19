#include<stdio.h>
void pattern(int ino)
{
    int i = 0;
    int ans = 1;
    for(i=1;i<=ino;i++)
    {
        ans = 2 * i;
        printf("%d\t",ans);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number of element \n");
    scanf("%d",&ivalue);

    pattern(ivalue);
    return 0;
}