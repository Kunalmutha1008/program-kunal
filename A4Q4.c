#include<stdio.h>
int multiply(int ino1,int ino2,int ino3)
{
    int ans = 1;
    if(ino1==0 )
    {
        ino1 =1;
    }
    if(ino2 == 0)
    {
        ino2 = 1;
    }
    if(ino3 == 0)
    {
        ino3 = 1;
    }
    if(ino1 == 0 || ino2 == 0 || ino3 == 0)
    {
        ans = 0;
    }
    ans = ino1*ino2*ino3;
    return ans;
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0,ivalue3 = 0,iret =0;
    printf("enter 3 integer number\n");
    scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);
    iret = multiply(ivalue1,ivalue2,ivalue3);
    printf("multiplication is %d",iret);

    return 0;
}