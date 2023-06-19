// diff between sumation of all iits factors and non factor
#include<stdio.h>
int factdiff(int ino)
{
    int sum1 = 0;
    int sum2= 0;
    int ans = 0;
    int i = 0;
    for(i=1;i<ino;i++)
    {
        if(ino%i==0)
        {
            sum1 = sum1 + i;
        }
        else
        {
            sum2 = sum2 +i;
        }
    }
    ans = sum1 - sum2;
    return ans;
}
int main()
{
    int iret = 0;
    int ivalue = 0;
    printf("enter a number \n");
    scanf("%d",&ivalue);
    iret = factdiff(ivalue);
    printf("%d",iret);
    return 0; 
}