// Write a program which accepts one number from the user and prints that number of even numbers on the screen.

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenNumber(int iNO)
{
    int iCnt =1;

    if(iNO <0)
    {
        return;
    }

    for(iCnt =1; iCnt <=iNO; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
   
}

int main()
{
    int iValue = 0;

    printf("enter the Number:");
    scanf("%d",&iValue);

    DisplayEvenNumber(iValue);

    return EXIT_SUCCESS;
}