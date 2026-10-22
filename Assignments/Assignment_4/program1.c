/*  Write a C program that accepts an integer from the user and determines 
 whether the entered number is positive, negative, or zero. */


#include<stdio.h>
#include<stdlib.h>

void checkNumber(int iNO)
{
    if(iNO > 0)
    {
        printf("Number is positive.");
    }
    else if(iNO < 0)
    {
        printf("Number is negative");
    }
    else{
        printf("Number is zero");
    }
}
int main()
{

    int iValue = 0;

    printf("Enter your no :");
    scanf("%d",&iValue);

    checkNumber(iValue);

    return EXIT_SUCCESS;
}