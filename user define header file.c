#include<stdio.h>

#include"user define file.h"

int main()
{
    struct Demo obj;

    printf("inside main");
    printf("rate of intrest %f\n ",ROI);                         //10.7
    printf("fees of LB batch %d\n",fees);                       //18200
    printf("size of demo structure:  %d\n",sizeof(obj));       //8 

    return 0;

}