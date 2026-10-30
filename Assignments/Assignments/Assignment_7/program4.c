#include<stdio.h>
#include<stdlib.h>

void printOddNumbers(int iNO)
{
    int icnt = 1;
    while(icnt<=iNO)
    {
        if((icnt % 2)!=0 )
        {
            printf("%d\t",icnt);
        }
        icnt++;
    }
}
int main()
{

    int iValue = 0;

    printf("Enter your number :");
    scanf("%d",&iValue);

    printOddNumbers(iValue);
    return EXIT_SUCCESS;
}