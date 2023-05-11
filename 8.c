#include<stdio.h>
void display(int ino)
{
    int icnt = 0;
    if(ino<0)           //filter for negative
    {
        printf("errror : invalid input\n");
        printf("please enter positive number\n");
        return;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\n",icnt);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter the frequency : \n");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}