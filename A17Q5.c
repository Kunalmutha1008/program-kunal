#include <stdio.h>
void pattern(int irow, int icol)
{
    int i = 0, j = 0;
    int no = 0;
        for (i = 1; i <= irow; i++)
        {
            for (j = 1; j <= icol; j++)
            { 
                no = no+1;
                printf("%d\t",no);     
            }
            printf("\n");
            no = i;
        }
}
int main()
{
    int ivalue = 0, ivalue2 = 0;
    printf("enter number of row and column\n");
    scanf("%d%d", &ivalue, &ivalue2);
    pattern(ivalue, ivalue2);
    return 0;
}