#include<stdio.h>
void displaydigit(int ino)
{
    int idigit =0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        idigit = ino % 10;
        printf("%d \t",idigit);
        ino = ino/10;
    }
}

int main()
{
    int ivalue = 0;
    printf("enter number\n");
    scanf("%d",&ivalue);

    displaydigit(ivalue);
    return 0;
}
