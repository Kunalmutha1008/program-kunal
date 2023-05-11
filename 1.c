#include<stdio.h>
/*
    function name  1.c
    input           int int
    output          int
    description     addition of 2 no
    author          kunal mutha
    date            19/4/2023
*/

unsigned int addition(unsigned int ino1, unsigned int ino2)
{
    unsigned int iresult = 0;
    iresult = ino1+ino2;
    return iresult;
}
int main()
{
    unsigned int ival1 =0,ival2=0, ians=0;
    printf("enter 2 int no\n");
    scanf("%d%d",&ival1,&ival2);

    ians = addition(ival1,ival2);
    printf("addition of 2 no is: %d",ians);

    return 0;

}