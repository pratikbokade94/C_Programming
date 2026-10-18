// program to print 5 times 'marvellous'.

#include <stdio.h>
#include<stdlib.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}
