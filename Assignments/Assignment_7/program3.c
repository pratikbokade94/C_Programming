//  Write a program which accepts a number from the user and prints its numbers in a line.
// Input: 4
// Output: -4  -3  -2  -1  0  1  2  3  4
#include<stdio.h>
#include<stdlib.h>

void printNumberline(int iNO)
{
    if(iNO <0)
    {
        iNO = -iNO;
    }
    int icnt = -iNO;
    while(icnt<=iNO)
    {
        printf("%d\t",icnt);
        icnt++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter your number :");
    scanf("%d",&iValue);

    printNumberline(iValue);

    return EXIT_SUCCESS;

}