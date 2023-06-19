#include<stdio.h>
float calculatebill(int iamount)
{
    float ans = 0.0f;
    if(iamount<500)
    {
        ans = iamount;
    }
    else if ((iamount>=500) && (iamount <1500))
    {
        ans = iamount - (((float)(iamount) *(float)10)/100); 
    }
    else
    {
        ans = iamount - (((float)(iamount) * (float)15)/100);            
    }
    return ans;
}  
int main()
{
    float fret = 0.0f;
    int amount = 0;
    printf("enter the bill amount \n");
    scanf("%d",&amount);
    fret = calculatebill(amount);
    printf("total bill after discount is %f",fret);
    return 0;
}