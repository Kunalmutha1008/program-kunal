#include<stdio.h>
float averageofdigit(int ino)
{
    int sum=0;
    int idigit=0;
    int cnt= 0;
    //float ans = 0.0f;
    
    while(ino != 0)                     
    {
        idigit = ino % 10;
        sum = sum + idigit;
        cnt++;
        ino = ino / 10;
    }
    return ((float)sum / (float)cnt);

}
int main()
{
    float iret =0.0f;
    int ivalue = 0;
    printf("enter a number");
    scanf("%d",&ivalue);

    iret = averageofdigit(ivalue);
    printf("sum  of digit is %f :",iret);
}