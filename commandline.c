#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    printf("demonstration of command line\n");

    int no1 = atoi(argv[1]);
    int no2 = atoi(argv[2]);

    int ans = no1+no2;
    printf("number of command line argument : %d  ",argc);
    printf("addition is %d \t",ans);

    return 0;
}



//command on command prompt
//gcc commandline.c -o myexe
// myexe 11,21