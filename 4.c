#include<stdio.h>

void display(int ino)
{
    int icnt = 0;
    for(icnt = 1;icnt <= ino;icnt++)
    {
        printf("Jay Ganesh \n");
    }
}
int main()
{
    int ivalue = 0;
    printf("enter the frequency of jay ganesh statment..");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}