#include<stdio.h>
int countodd(int ino)
{
    int idigit = 0;
    int cnt = 0;
    while(ino != 0)
    {
        idigit = ino % 10;
        if(ino%2 != 0)
        {
            cnt++;
        }
        ino = ino/10;
    }
    return cnt;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter number");
    scanf("%d",&ivalue);

    iret = countodd(ivalue);
    printf("%d",iret);
    return 0;
}