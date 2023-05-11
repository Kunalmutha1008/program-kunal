#include<stdio.h>
int biggestdigit(int ino)
{
    int digit =0;
    int imax = 0;
    if(ino<0)
    {
        ino = -ino;
    }
    while(ino !=0)
    {
        digit= ino%10;
        if(digit>imax)
        {
            imax = digit;
        }
        
        ino =ino/10;
    }
    return imax;
}
int main()
{
    int iret =0;
    int ivalue = 0;
    printf("enter a number");
    scanf("%d",&ivalue);

    iret = biggestdigit(ivalue);
    printf("biggest digit is %d :",iret);
}