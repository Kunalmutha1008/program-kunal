#include<stdio.h>
void demo()
{
    static int no=10;               //static storage class with initialzation 

    no++;

    printf("%d",no); 
}
int main()
{
    demo();
    demo();
    demo();
    return 0;
}