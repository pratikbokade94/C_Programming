//  take input from user and print even factors of that number.

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenFactors(int iNO){
    int iCnt =0;

    if(iNO <0){
        iNO = -iNO; 
    }
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        if(iNO % iCnt == 0)
        {
            if(iCnt % 2  == 0)
            printf("%d\t",iCnt);
        }
    }
}

int main()
{

    int iValue = 0;

    printf("enter the Number:");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return EXIT_SUCCESS;
}