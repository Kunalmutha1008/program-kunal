#include<stdio.h>
#include<stdbool.h>

int count(int ino)
{
    int cnt=0;
    int idigit = 0;
    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit <6)
        {
            cnt++;
        }
        ino = ino / 10;
    }
    return cnt;
}
int main()
{
    int ivalue =0;
    int bret = 0;
    printf("enter number");
    scanf("%d",&ivalue);

    bret = count(ivalue);
    printf("%d",bret);
    return 0;
}