// Q1. Write a program which accepts a number from the user and prints that number of $ and * symbols alternately on the screen.
#include<stdio.h>
#include<stdlib.h>

void printGiven(int iNO)
{
    int iCnt = 0;

    if(iNO < 0)
    {
        iNO = -iNO;
    }
    for(int iCnt = 1; iCnt <=iNO; iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    printGiven(iValue);


    return EXIT_SUCCESS;

}

