// display ascii table
#include<stdio.h>
void display()
{
    int i =0;
    for(i=0;i<=255;i++)
    {
        printf("%c \t %d \t %x \t %o\t",i,i,i,i);
        printf("\n");
    }
}
int main()
{
    display();
    return 0;
}