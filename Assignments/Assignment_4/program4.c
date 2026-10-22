//  Take a input Age from user check if it is  eligible to vote or not.  

#include<stdio.h>
#include<stdlib.h>

void Eligibility(int iNO)
{

    if(iNO <=0)
    {
        printf("Enter the valid Age");
        return;
    }

    if(iNO >= 18 )
    {
        printf(" Eligible to vote");
    }

    else{

        printf("Not Eligible to vote"); 
    }
}

int main()
{

    int iValue = 0;

    printf("Enter your Age : ");
    scanf("%d", &iValue);

    Eligibility(iValue);

    return EXIT_SUCCESS;
}