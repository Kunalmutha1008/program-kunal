#include<stdio.h>
float touristbill(int iamount)
{
    float ans = 0.0f;
    if(iamount<100)
    {
        ans = iamount*25;
    }
    else if(iamount>=100) 
    {
        ans = 100*25 + ((iamount-100) * 15);
    }
    
    return ans;
}  
int main()
{
    float fret = 0.0f;
    int amount = 0;
    printf("enter the kilometer \n");
    scanf("%d",&amount);
    fret = touristbill(amount);
    printf("tourist bill is %f",fret);
    return 0;
}