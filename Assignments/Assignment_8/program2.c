/* Q2. Accept a single-digit number from the user and print it into words.
Input: 9
Output: Nine

Input: -3
Output: Three

Input: 12
Output: Invalid Number */

#include<stdio.h>
#include<stdlib.h>

void printNumberInWord(int iNO)
{
     if(iNO <0)
        {
            iNO = -iNO;  
        }

        if(iNO > 9)
        {
            printf("invalid number.");
            return;
        }

    switch(iNO)
    {

        case 1:
        printf("One");
        break;

        case 2:
        printf("Two");
        break;

        case 3:
        printf("three");
        break;

        case 4:
        printf("four");
        break;

        case 5:
        printf("five");
        break;

        case 6:
        printf("six");
        break;

        case 7:
        printf("seven");
        break;

        case 8:
        printf("Eight");
        break;

        case 9:
        printf("Nine");
        break;
        

    }
}

int main()
{

    int iValue = 0;
    
    printf("Enter your number :");
    scanf("%d",&iValue);

    printNumberInWord(iValue);

    return EXIT_SUCCESS;
}