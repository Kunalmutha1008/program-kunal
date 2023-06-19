//display non factorial number
#include<stdio.h>
void nonfact(int ino)
{
    int i=0;
    for(i=1;i<ino;i++)
    {
        if(ino%i!=0)
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
    nonfact(ivalue);

    return 0; 
}