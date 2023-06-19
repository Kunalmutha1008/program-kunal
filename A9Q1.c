#include<stdio.h>
int difference(int arr[],int ilength)
{
    int even = 0;
    int odd = 0;
    int ans = 0;
    int i= 0;
    for(i=0;i<ilength;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even = even + arr[i];
        }
        else
        {
            odd = odd + arr[i];
        }
    }
    ans = even - odd;
}
int main()
{
    int isize = 0,iret = 0,i = 0;
    int *p = NULL;
    printf("enter number of elements\n");
    scanf("%d",&isize);

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
    iret = difference(p,isize);
    printf("result is :%d",iret);
    free(p);
    return 0;
}