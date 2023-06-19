#include<stdio.h>
int multidigit(int ino)
{
    int idigit = 0;
    int ans = 1;
    while(ino != 0)
    {
        if(idigit == 0)
        {
            idigit = 1;
        }
        idigit = ino % 10;
        ans = ans * idigit;
        ino = ino / 10;
    }
    return ans;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter a number");
    scanf("%d",&ivalue);
    iret = multidigit(ivalue);
    printf("%d",iret);
    return 0;

}