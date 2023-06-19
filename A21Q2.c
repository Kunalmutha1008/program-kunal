#include<stdio.h>
void display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c",ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}
int main()
{
    char cvalue = '\0';
    printf("enter the character \n");
    scanf("%c",&cvalue);
    display(cvalue);

    return 0;
}