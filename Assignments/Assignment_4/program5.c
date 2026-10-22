//  Take a input number from user check if it is divisible by 5 or not.  

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNO)
{

   if(iNO % 5 == 0)
   {
    printf("number is divisible by 5");
   }
   else{
    printf("number is not divisible by 5");
   }
}

int main()
{

    int iValue = 0;

    printf("Enter your number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}