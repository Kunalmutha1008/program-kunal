#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char name[30];
    int FD=0;
    char data[30] = {'\0'};

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

    lseek(FD,9,SEEK_SET);

    read(FD,data,7
    );

    printf("data from file is : %s",data);
    //write(1,data,5);
    close(FD);

    return 0;
} 