/* Q4. Write a program which accepts a number from the user and displays its multiplication table.

Input: 2
Output: 2  4  6  8  10  12  14  16  18  20

Input: 5
Output: 5  10  15  20  25  30  35  40  45  50

Input: -5
Output: 5  10  15  20  25  30  35  40  45  50 */

#include<stdio.h>
#include<stdlib.h>

void printTable(int iNO)
{   
    if(iNO < 0)
    {
        iNO = -iNO;
    }

    int icnt = 1;
    while(icnt<=10)
    {
        printf("%d\t",iNO * icnt);

        icnt++;
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