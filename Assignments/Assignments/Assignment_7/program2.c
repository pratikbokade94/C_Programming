//  Q2. Write a program which accepts a number from the user and prints all numbers from 1 up to that number on the screen.
#include<stdio.h>
#include<stdlib.h>

void printNumber(int iNO)
{
    int icnt = 1;
    while(icnt<=iNO)
    {

        printf("%d\n",icnt);

        icnt++;
    
    }
}

int main()
{

    int iValue = 0;

    printf("Enter your number :");
    scanf("%d",&iValue);

    printNumber(iValue);
    return EXIT_SUCCESS;

}