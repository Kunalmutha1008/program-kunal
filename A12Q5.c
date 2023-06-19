#include<stdio.h>
#include<stdlib.h>
void digitsum(int arr[],int ilength)
{
    int i =0;
    int digit = 0,sum =0;
    for(i=0;i<ilength;i++)
    {
        while(arr[i] != 0)
        {
            digit = arr[i]%10;
            sum = sum + digit;
            arr[i] = arr[i]/10;
        }
        printf("%d sum is %d \n",arr[i],sum);
        sum = 0;
    }
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
    digitsum(p,isize);

    free(p);
    return 0;
}