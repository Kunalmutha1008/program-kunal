#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE -1

BOOL check(int ino)
{
    if((ino % 5) == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    int ivalue=0;
    BOOL bret = FALSE;
    printf("enter a number");
    scanf("%d",&ivalue);
    bret = check(ivalue);
    if(bret == TRUE)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return 0;
}