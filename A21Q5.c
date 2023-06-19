// display ascii table
#include<stdio.h>
void display(int ch)
{
    
    printf(" %d \t %x \t %o\t",ch,ch,ch);
    printf("\n");
    
}
int main()
{
    char cvalue = '\0';
    printf("enter the character \n");
    scanf("%c",&cvalue);
    display(cvalue);
    return 0;
}