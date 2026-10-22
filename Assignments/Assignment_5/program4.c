/* Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5, or neither.

Expected Output:
 Input: 15 → Divisible by Both
 Input: 9 → Divisible by 3 Only
 Input: 10 → Divisible by 5 Only
 Input: 7 → Not Divisible by Either */

#include<stdio.h>
#include<stdlib.h>

void checkMultipleDivisibility(int iNO)
{
    if(iNO <=0)
    {
        printf("invalid Number.");
        return;
    }
    if(iNO % 3 == 0 && iNO % 5 == 0 )
    {
        printf("divisible by both.");
    }
    else if(iNO % 3 == 0)
    {
        printf("Divisible by 3 only.");
    }
    else if(iNO % 5 == 0)
    {
        printf("divisible by 5 only.");
    }
    else
    {
        printf("divisible by none.");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your Number: ");
    scanf("%d",&iValue);

    checkMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}