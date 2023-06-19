#include<stdio.h>
#include<stdlib.h>
int counteven(int arr[],int ilength)
{
    int i= 0;
    int cnt = 0;
    for(i=0;i<ilength;i++)
    {
        if((arr[i] % 2 == 0) )
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int isize = 0,i = 0,iret = 0;
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
    iret = counteven(p,isize);
    printf("result is %d",iret);
    free(p);
    return 0;
}