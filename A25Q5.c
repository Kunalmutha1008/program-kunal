/*
1 2 3 4 5 
1 2     5
1   3   5
1     4 5
1 2 3 4 5
*/
#include<stdio.h>
void pattern(int irow ,int icol)
{
    int i,j;
    for(i = 1;i<= irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if((i == j) || (i == 1) || (i == irow) || (j == 1) || (j == icol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    printf("enter number of rows and columns \n");
    scanf("%d%d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);
    return 0;
}