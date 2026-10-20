// Accept the two input from the user and  print the first no at the times of 2nd .

#include<stdio.h>
#include<stdlib.h>


void Display(int iNO1, int iNO2)
{

    int iCnt =0;
    for(iCnt=1; iCnt <= iNO2; iCnt++)
    {
        printf("%d\t",iNO1);
    }

   /*  
        while(iCnt <= iNO2)
        {
            printf("%d\t",iNO1);

            iCnt++;
        }  

     */ 
}

int main()
{   

    int iValue1 = 0 , iValue2 =0;

    
    printf("Enter your 1st number :");
    scanf("%d",&iValue1);

    printf("Enter your 2nd number :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return  EXIT_SUCCESS;
}