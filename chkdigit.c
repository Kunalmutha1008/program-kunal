#include<stdio.h>
#include<stdbool.h>

bool chkdigit(int ino)
{
    int digit = 0;

    while(ino != 0)
    {
        digit=ino%10;
        if(digit == 8)
        {
            break;
        }
        ino = ino/10;
        if(digit == 8)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    bool fret = false;
    int ivalue = 0;
    printf("enter a number");
    scanf("%d",&ivalue);

    fret = chkdigit(ivalue);
    if(fret == true)
    {
        printf("digit 8 is present \n");
    }
    else
    {
        printf("digit 8 is not present \n");
    }
}

// time complexicity O(N)  N is no of digit
// space complexicity   