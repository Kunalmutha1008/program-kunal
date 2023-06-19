//factor multiplication

#include<stdio.h>
int multfact(int ino)
{
    int i=0;
    int ans = 1;
    for(i=1;i<=(ino/2);i++)
    {
        if(ino%i==0)
        {
            ans = ans*i;
        }
    }
    return ans;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter a number\n ");
    scanf("%d",&ivalue);

    iret = multfact(ivalue);

    printf("%d",iret);
    return 0;
}