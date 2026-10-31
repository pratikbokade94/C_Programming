/* Q5. Write a program which accepts a number from the user and displays its multiplication table in reverse order.

Input: 2
Output: 20  18  16  14  12  10  8  6  4  2

Input: 5
Output: 50  45  40  35  30  25  20  15  10  5

Input: -5
Output: 50  45  40  35  30  25  20  15  10  5 */

#include<stdio.h>
#include<stdlib.h>

void printTable(int iNO)
{   
    if(iNO < 0)
    {
        iNO = -iNO;
    }

    int icnt = 10;
    while(icnt>=1)
    {
        printf("%d\t",iNO * icnt);

        icnt--;
    }

}
int main()
{
     int iValue = 0;
    
    printf("Enter your number :");
    scanf("%d",&iValue);

    printTable(iValue);
    return EXIT_SUCCESS;
}