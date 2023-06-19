#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if((i == 1) || (i == irow) || (j == 1) || (j == icol) || (i==j))
            {
                printf("* \t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
        printf("\n");
        printf("\n");
    }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    printf("enter number of rows and column \n");
    scanf("%d %d",&ivalue1,&ivalue2);
    pattern(ivalue1,ivalue2);
    return 0;
}