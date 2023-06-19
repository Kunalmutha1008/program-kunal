#include<stdio.h>
void pattern(int ino)
{
    int i = 0;
    char ch ='A';
    for(i=1;i<=ino;ch++,i++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number of element \n");
    scanf("%d",&ivalue);

    pattern(ivalue);
    return 0;
}