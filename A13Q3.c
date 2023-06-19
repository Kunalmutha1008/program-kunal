#include<stdio.h>
float schoolfees(int istd)
{
    float ans = 0.0f;
    if(istd == 1)
    {
        ans = 8900;
    }
    else if (istd == 2)
    {
        ans = 12790;
    }
    else if(istd == 3)
    {
        ans = 21000;
    }
    else if(istd == 4)
    {
        ans = 23450;
    }
    else
    {
        printf("wrong input");
    }
    return ans;
}  
int main()
{
    float fret = 0.0f;
    int standard = 0;
    printf("enter the standard of stdent (1-4) \n");
    scanf("%d",&standard);
    fret = schoolfees(standard);
    printf("total fees is %f",fret);
    return 0;
}