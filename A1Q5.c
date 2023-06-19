#include <stdio.h>

void accept(int no)
{
    for (int i = 0; i <= no; i++)
    {
        printf("*");
    }
}
int main()
{
    int ivalue = 0;
    ivalue = 5;

    accept(ivalue);
    return 0;
}