#include<stdio.h>
#include<stdbool.h>
bool chkgreater(int ino)
{
    if(ino>=100)
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
    bool bret = false;
    printf("please enter a no \n");
    scanf("%d",&ivalue);

    bret = chkgreater(ivalue);
    if(bret == true)
    {
        printf("greater");
    }
    else
    {

        printf("smaller");
    }
    return 0;
}