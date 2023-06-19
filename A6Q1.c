// accept no from user if no<50 print small , if no>50 and<100 medium  , if greater than100 then large
#include<stdio.h>
void number(int ino)
{
    if(ino<50)
    {
        printf("small");
    }
    else if(ino>=50 && ino<100)
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }
}

int main()
{
    int ivalue = 0;
    printf("enter a number\n");
    scanf("%d",&ivalue);
    number(ivalue);
    return 0;
}
