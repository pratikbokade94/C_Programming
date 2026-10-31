/* Write a program to find the factorial of a given number.
 Input: 5
Output: 120
(5 * 4 * 3 * 2 * 1)

Input: -5
Output: 120
(5 * 4 * 3 * 2 * 1)

Input: 4
Output: 24
(4 * 3 * 2 * 1) */
#include<stdio.h>
#include<stdlib.h>

int printFactorial(int iNO)
{
    if(iNO < 0)
    {
        iNO = -iNO;
    }
    

    int icnt = 0;
    int ifact = 1;

    for(icnt = 1; icnt<=iNO ; icnt++)
    {
        ifact = ifact * icnt;
    }

    return ifact;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter your number :");
    scanf("%d",&iValue);

    iRet = printFactorial(iValue);
    printf("Factorial is :%d",iRet);

    return EXIT_SUCCESS;
}