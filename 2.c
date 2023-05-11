// wap check number is odd or even
/*
    function name : - chkEven 
    input :- ino
    output:- boolean
    description:-check input is even or odd
    author:- kunal
    date:-25/04/2023

*/
#include<stdio.h>        //for printf scanf


#include<stdbool.h>     //for bool data type
typedef int BOOL;
#define TRUE 1
#define FALSE -1

BOOL chkEven(int ino)
{
    if(ino%2==0)
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
    BOOL dref = FALSE;
    printf("enter 1 int number");
    scanf("%d",&ivalue);
    dref = chkEven(ivalue);
    if(dref == TRUE)
    {
        printf("number %d is EVEN",ivalue);
    } 
    else
    {
        printf("number %d is ODD",ivalue);
    }
    return 0;
}