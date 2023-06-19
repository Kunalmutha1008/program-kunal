#include<stdio.h>
void display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        for(int i='A';i<='Z';i++)
        {
            printf("%c\t",ch++);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (int i = 'a'; i <='z'; i++)
        {
            printf("%c\t",ch--);
        }
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