/* Write a program which accepts a number N from the user and prints the first 5 multiples of N.
Input: 4
Output: 4  8  12  16  20 */

#include<stdio.h>
#include<stdlib.h>

void printFirstFiveMultiple(int iNO)
{
    if(iNO <0)
    {
        iNO = -iNO;
    }

    int icnt = 0;
    for(icnt = 1; icnt<= 5; icnt++)
    {
        printf("%d\t",iNO*icnt);
    }


}

int main()
{

    int iValue = 0;

    printf("Enter your number :");
    scanf("%d",&iValue);
    printFirstFiveMultiple(iValue);

    return EXIT_SUCCESS;
}