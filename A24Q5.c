#include<stdio.h>
void strrevx(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    start = str;
    end = str;
    while (*end != '\0')
    {
        end++;
    }
    end--;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}
int main()
{
    char arr[20];
    printf("enter a string \n");
    scanf("%[^'\n']s",arr);

    strrevx(arr);
    printf("modified string is %s",arr);
    return 0;
}