// check wheather input is alphabet or not
#include<stdio.h>
#include<stdbool.h>

void displayscedule(char ch)
{
    if(ch == 'a' || ch == 'A')
    {
        printf("Exam of division %c  is at 7 AM",ch);
    }
    else if (ch == 'b' || ch == 'B')
    {
        printf("Exam of division %c is at 8:30 AM",ch);
    }
    else if (ch == 'c' || ch == 'C')
    {
        printf("Exam of division %c is at 9:20 AM",ch);
    }
    else if (ch == 'd' || ch == 'D')
    {
        printf("Exam of division %c is at 10:30 AM",ch);
    }
}
int main()
{
    char cvalue='\0';
    int bret = 0;
    printf("enter your division \n");
    scanf("%c",&cvalue);

    displayscedule(cvalue);
    return 0;
}