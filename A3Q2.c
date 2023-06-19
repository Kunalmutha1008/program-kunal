//print reverse factor
#include<stdio.h>
void factrev(int ino)
{
    int i=0;
    for(i=(ino/2);i>=1;i--)
    {
        if(ino%i==0)
        {
            printf("%d \t",i);
        }
    }
}
int main()
{
    int ivalue = 0;
    printf("enter a number \n");
    scanf("%d",&ivalue);
    factrev(ivalue);

    return 0; 
}