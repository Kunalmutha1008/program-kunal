#include<stdio.h>
void demo()
{
    int no=10;          //auto storage with stack storage 

    no++;

    printf("%d\n",no); 
}
int main()
{
    demo();
    demo();
    demo();
    return 0;
}