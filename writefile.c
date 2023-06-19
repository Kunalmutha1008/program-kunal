#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char name[30];
    int FD=0;
    char data[] = "india is my country";

    printf("enter file name that you want to open");
    scanf("%s",name);

    FD = open(name,O_RDWR);
    if(FD == -1)
    {
        printf("unable to open file");
        return -1;
    }
    else
    {
        printf("file is succesfully open");
    }

    write(FD,data,19);

    return 0;
} 