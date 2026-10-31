/* Q1. Write a program which accepts a number from the user. If the number is less than 50, print "Small".
 If it is greater than 50 and less than 100, print "Medium". If it is greater than 100, print "Large".
Example 1:
Input: 25
Output: Small */

#include<stdio.h>
#include<stdlib.h>

void checkSize(int iNO)
{

    if(iNO <0)
    {
        printf("Invalide number.");
        return;
    }
    if(iNO >0 && iNO <=50 )
    {
        printf("Small.");
    }
    else if(iNO > 50 && iNO <=100)
    {
        printf("Medium.");
    }
    else{
        printf("Large.");
    }

}

int main()
{

    int iValue = 0;
    
    printf("Enter your number :");
    scanf("%d",&iValue);

    checkSize(iValue);

    return EXIT_SUCCESS;
}