// sum of non factorial
#include<stdio.h>
int sumnonfact(int ino)
{
    int sum = 0;
    int i=0;
    for(i=1;i<ino;i++)
    {
        if(ino%i!=0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int iret = 0;
    int ivalue = 0;
    printf("enter a number \n");
    scanf("%d",&ivalue);
    iret = sumnonfact(ivalue);
    printf("sum of non factor is %d",iret);
    return 0; 
}