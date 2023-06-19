#include<stdio.h>
#include<stdlib.h>
int maximum(int arr[],int ilength)
{
    int i =0;
    int max = arr[0];
    for(i=0;i<ilength;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i]; 
        }
    }
    return max;
}
int main()
{
    int *p = NULL;
    int i =0,isize = 0,iret = 0;
    printf("enter the size of array \n");
    scanf("%d",&isize);

    p = (int *)malloc(isize *(sizeof (int)));
    printf("enter %d element",isize);
    for(i=0;i<isize;i++)
    {
        printf("enter the element %d : ",i+1);
        scanf("%d",&p[i]);
    }
    iret = maximum(p,isize);
    printf("largest number is %d",iret);

    free(p);
    return 0;
}