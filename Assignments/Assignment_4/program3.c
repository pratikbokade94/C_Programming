// take two input numbers from user and give which one is greater.

#include<stdio.h>
#include<stdlib.h>

void checkGreater(int iNO1, int iNO2)
{

    if(iNO1  == 0 && iNO2 == 0)
    {
        printf("enter valid number");
    }
    if(iNO1 > iNO2)
    {
        printf("%d greator  is :",iNO1);
    }

    if(iNO2 > iNO1)
    {
        printf("%d is greater",iNO2);
    }
}
int main()
{
     int NO1 =0, NO2 = 0;

    printf("Enter your 1st number:\n");
    scanf("%d", &NO1);

    printf("Enter your 2nd number:\n");
    scanf("%d", &NO2);

    checkGreater(NO1,NO2);

    return EXIT_SUCCESS;
}