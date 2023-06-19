#include<stdio.h>
int countdiff(int ino)
{
    int idigit = 0;
    int ans = 0;
    int odd = 0;
    int even = 0;
    while(ino != 0)
    {
        
        idigit = ino % 10;
        if(ino % 2 == 0)
        {
            even = even + idigit;
        }
        else
        {
            odd = odd + idigit;
        }
        ino = ino / 10;
        
    }
    ans = even - odd;
    return ans;
}
int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter a number");
    scanf("%d",&ivalue);
    iret = countdiff(ivalue);
    printf("%d",iret);
    return 0;

}