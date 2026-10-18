// Accept one number from the user and print that number of * on the screen.

#include<stdio.h>
#include<stdlib.h>
void Display(int iNO)
{
    int iCnt  =1;

    if(iNO < 0){
        iNO = - iNO;  //  updater.
        
    }

    while( iCnt <= iNO )
    {
        printf("*\t");

        iCnt++;
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter your number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
