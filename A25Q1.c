/*
* * * #
* * # *
* # * *
# * * *
*/


#include<stdio.h>
void pattern(int irow ,int icol)
{
    int i,j;
    for(i = irow;i>= 1;i--)
    {
        for(j=1;j<=icol;j++)
        {
            if(i == j)
            {
                printf("# \t");
            }
            else
            {
                printf("* \t");
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