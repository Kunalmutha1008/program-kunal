#include<stdio.h>

// typedef old_name new_name;

typedef const int CINT;

typedef unsigned int UINT;
int main()
{
    printf("hello");
    const int no=11;
    CINT i = 11;

    unsigned int X =21;
    UINT Y = 21;
    return 0;
}