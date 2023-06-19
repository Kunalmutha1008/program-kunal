#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void range(int arr[],int ilength,int ino1,int ino2)
{
    int i= 0;
    for(i=0;i<ilength;i++)
    {
        if((arr[i] >= ino1) && (arr[i] <= ino2))
        {
            printf("%d \t",arr[i]);
        }
    }
}
int main()
{
    int ivalue2 = 0;
    int isize = 0,i = 0,ivalue1 =0;
    int *p = NULL;
    printf("enter number of elements\n");
    scanf("%d",&isize);
    
    printf("enter a value for starting range an array\n");
    scanf("%d",&ivalue1);
    
    printf("enter a value for ending range an array\n");
    scanf("%d",&ivalue2);
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
    range(p,isize,ivalue1,ivalue2);
    free(p);
    return 0;
}