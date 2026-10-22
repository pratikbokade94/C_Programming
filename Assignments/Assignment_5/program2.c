/*  Accept a year and determine whether it is a leap year according to Gregorian calendar rules.A year is a leap 
year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than or equal to zero invalid. */

#include<stdio.h>
#include<stdlib.h>

void checkLeapYear(int iNO)
{
    if(iNO<=0){
        printf("Invalid year");
        return;
    }
       // leap year is divisible by 400 or divisible by 4 but not by 100.
         if( (iNO % 400 == 0) || (iNO % 4 ==0) && (iNO % 100 !=0)  )
        {
            printf("Year is leap :%d",iNO);
        }
        else{
            printf("not a leap year");
        }
       
}

int main()
{

    int iValue = 0;
    
    printf("Enter your year : ");
    scanf("%d",&iValue);

    checkLeapYear(iValue);

    return EXIT_SUCCESS;

}