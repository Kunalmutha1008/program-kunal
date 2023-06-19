#include<stdio.h>
#include<stdlib.h>
int lastocc(int arr[],int ilength,int ino)
{
    int i= 0;
    for(i=ilength;i>=0;i--)
    {
        if((arr[i] == ino))
        {
            break;
        }
        
    }
    if(i == ilength)
        {
            return -1;
        }
        else 
        {
            return i;
        }
}
int main()
{
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
    iret = lastocc(p,isize,ivalue);
    
    if(iret == -1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("%d is present in array at index %d",ivalue,iret);
    }
    free(p);
    return 0;
}