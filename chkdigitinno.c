#include<stdio.h>
#include<stdbool.h>

bool chkdigit(int dig,int ino)
{
    if((dig<0) || (dig>9))
    {
        printf("enter digit in range 0 to 9");
        return false;
    }
    if(ino<0)
    {
        ino=-ino;
    }
    int digit = 0;
    while(ino != 0)
    {
        digit=ino%10;
        if(digit == dig)
        {
           break;
        }
        ino = ino/10;
        
    }
    if(ino == dig)
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
    bool fret = false;
    int ivalue = 0;
    int idigit = 0;
    printf("enter a number");
    scanf("%d",&ivalue);
    printf("enter a digit");
    scanf("%d",&idigit);
    fret = chkdigit(idigit,ivalue);
    if(fret == true)
    {
        printf("%d is present in %d\n",idigit,ivalue);
    }
    else
    {
        printf("%dis not present %d\n",idigit,ivalue);
    }
}

// problem 59.c