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

    FD = creat(name,0777);
    if(FD == -1)
    {
        printf("unable to create file-\n");
    }
    else
    {
        printf("file is succesfully created\n");
    }
    return 0;
} 