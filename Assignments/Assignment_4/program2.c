// Accept the number from user and check weather it is even or odd.

#include<stdio.h>
#include<stdlib.h>

void checkIsEven(int iNO)
{
    if(iNO == 0){
        printf("it is zero");
        return;
    }

    if(iNO % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter your number :\n");
    scanf("%d",&iValue);

    checkIsEven(iValue);

    return EXIT_SUCCESS;
}