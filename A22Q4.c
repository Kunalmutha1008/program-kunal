#include<stdio.h>
#include<stdbool.h>
bool chkvowel(char *str)
{
    while (*str != '\0')
    {
        if((*str == 'a') || (*str == 'A') ||(*str == 'e') || (*str == 'E') ||(*str == 'i') || (*str == 'I')||(*str == 'o') || (*str == 'O')||(*str == 'u') || (*str == 'U'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    char arr[20];
    bool bret = false;
    printf("enter a string \n");
    scanf("%[^'\n']s",arr);

    bret = chkvowel(arr);
    if(bret == true)
    {
        printf("contain vowels\n");
    }
    else
    {
        printf("not contain vowels \n");
    }
    return 0;
}