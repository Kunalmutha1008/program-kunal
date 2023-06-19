#include<stdio.h>
#include<stdbool.h>
bool chkequal(int ino1,int ino2)
{
    if(ino1 == ino2)
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
    int ivalue1 = 0,ivalue2 = 0;
    bool bret = false;
    printf("enter 2 number \n");
    scanf("%d%d",&ivalue1,&
    ivalue2);
    bret = chkequal(ivalue1,ivalue2);

    if(bret == true)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}