#include<stdio.h>
#include<stdlib.h>      //memory managment
float average(int arr[],int ilength)
{
    // step 5 : perform operation on array
    int sum = 0;
    float avg = 0.0f;
    for(int i=0;i<ilength;i++)
    {
        sum = sum + arr[i];
    }
    avg =(float)sum / (float)ilength;
    return avg;
}
int main()      //entry point fn
{
    int isize = 0;      //store size of array
    int *ptr = NULL;        //to store address of array
    int i = 0;              //loop counter
    float iret = 0.0f;
    //step 1 : accept number of element from user
    printf("enter size of element");
    scanf("%d",&isize);
    
    //step 2 : allocate memory dynamically
    ptr = (int*)malloc(isize*sizeof(int));

    //step 3 : accept value from user
    printf("enter the elements \n");
    for(i=0;i<isize;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("elements of array :\n");
    for(i=0;i<isize;i++)
    {
        printf("%d\n",ptr[i]);
    }
    //step 4 : pass array to function
    iret = average(ptr,isize);
    printf("average is %f",iret);
    //step 6 : deallocate memory of array
    free(ptr);
    return 0;
}