#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char name[30];
    int FD=0;
    printf("enter file name that you want to create");
    scanf("%s",name);

    FD = open(name,O_RDWR);
    if(FD == -1)
    {
        printf("unable to open file");
    }
    else
    {
        printf("file is succesfully open");
    }
    return 0;
} 