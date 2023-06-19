#include<stdio.h>
float incometax(int iamount)
{
    float ans = 0.0f;
    if(iamount<500000)
    {
        ans = iamount;
    }
    else if ((iamount>=500000) && (iamount <1000000))
    {
        ans = (((float)(iamount) *(float)10)/100); 
    }
    else if((iamount>=1000000) && (iamount <2000000))
    {
        ans = (((float)(iamount) * (float)20)/100);            
    }
    else
    {
        ans = (((float)(iamount) * (float)30)/100);            
    }
    return ans;
}  
int main()
{
    float fret = 0.0f;
    int income = 0;
    printf("enter the bill amount \n");
    scanf("%d",&income);
    fret = incometax(income);
    printf("total income tax is %f",fret);
    return 0;
}