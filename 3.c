/*
    no is divisible by 3 and 5
*/

#include<stdio.h>
#include<stdbool.h>

bool chkDivisible(int ino)
{
    if(((ino%5)==0) && ((ino%3)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    bool bref = false;
    printf("enter 1 integer number");
    scanf("%d",&ivalue);
    bref = chkDivisible(ivalue);
    if(bref == true)
    {
        printf("number %d is divisible by 3 and 5",ivalue);
    }
    else
    {
        printf("number %d is not divisible by 3 and 5",ivalue);
    }
    return 0;
}