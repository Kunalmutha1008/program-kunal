#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool check(int arr[],int ilength,int ino)
{
    int i= 0;
    for(i=0;i<ilength;i++)
    {
        if((arr[i] == ino))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    bool bret = false;
    int isize = 0,i = 0,iret = 0,ivalue =0;
    int *p = NULL;
    printf("enter number of elements\n");
    scanf("%d",&isize);
    
    printf("enter a valur to search in an array\n");
    scanf("%d",&ivalue);
    p = (int *)malloc(isize * sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate the memory\n");
        return -1;
    }
    printf("enter %d elements",isize);
    for(i = 0;i<isize;i++)
    {
        printf("enter the elements : %d  ",i+1);
        scanf("%d",&p[i]);

    }
    bret = check(p,isize,ivalue);
    
    if(bret == true)
    {
        printf("number is present");
    }
    else
    {
        printf("number is not present");
    }
    free(p);
    return 0;
}