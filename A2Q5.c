#include<stdio.h>
#define TRUE 1
#define FALSE -1
typedef int BOOL;
BOOL chkeven(int no)
{
    if(no%2==0)
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
    int ivalue = 0;
    BOOL bret = FALSE;
    printf("enter a number");
    scanf("%d",&ivalue);
    bret = chkeven(ivalue);
    if(bret == TRUE)
    {
        printf("number %d is EVEN",ivalue);
    }
    else
    {
        printf("number %d is ODD",ivalue);
    }
    return 0;
}