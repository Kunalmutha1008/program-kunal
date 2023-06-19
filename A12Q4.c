#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int ilength)
{
    int i =0;
    for(i=0;i<ilength;i++)
    {
        if((arr[i]>=100) && (arr[i]<=999))
        {
            printf("%d\t",arr[i]);
        }
    }
}
int main()
{
    int *p = NULL;
    int i =0,isize = 0,iret = 0;
    printf("enter the size of array \n");
    scanf("%d",&isize);

    p = (int *)malloc(isize *(sizeof (int)));
    printf("enter %d element\t",isize);
    for(i=0;i<isize;i++)
    {
        printf("enter the element %d : ",i+1);
        scanf("%d",&p[i]);
    }
    display(p,isize);

    free(p);
    return 0;
}