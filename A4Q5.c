//find percentage
#include<stdio.h>
float percentage(int obmark,int totmark)
{
    int ans = 1;
    ans = ((float)obmark/(float)totmark)*100;
    return ans;
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    float fret = 0.0f;
    printf("please enter total marks\n");
    scanf("%d",&ivalue1);
    printf("please enter obtained marks\n");
    scanf("%d",&ivalue2);

    fret = percentage(ivalue2,ivalue1);
    printf("percentage is %f",fret);
    return 0;
    
}