#include<stdio.h>
void pattern(int irow,int icol)
{
    int i = 0,j=0;
    for(i=1;i<=irow;i++)
    {
        for (j = icol; j >=1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
    int ivalue = 0,ivalue2 = 0;
    printf("enter number of row and column\n");
    scanf("%d%d",&ivalue,&ivalue2);

    pattern(ivalue,ivalue2);
    return 0;
}