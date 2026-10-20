// Accept the input from user if the no. is less than 10 then print 'hello' otherwise print 'demo'.

#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    if( iNO <10 )
    {
        printf("Hello");
    }
    else{
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}