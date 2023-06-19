#include<stdio.h>
#include<stdbool.h>
bool chkzero(long int ino)
{
    int idigit = 0;
    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        ino = ino / 10;
    }
}
int main()
{
    long int ivalue =0;
    bool bret = false;
    printf("enter number");
    scanf("%ld",&ivalue);
    bret = chkzero(ivalue);
    if(bret == true )
    {
        printf("it contain zero");
    }
    else
    {
        printf("it does not contain zero");
    }
    return 0;
}