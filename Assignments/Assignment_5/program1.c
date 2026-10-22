#include<stdio.h>
#include<stdlib.h>

int Largest(int iNO1,int iNO2, int iNO3)
{


    if(iNO1 == iNO2 && iNO2 == iNO3)
    {
        printf("all numbers are same range");
        return ;
        
    }

    if((iNO1 >= iNO2) && (iNO1>=iNO3) )
    {
        printf("Largest is :%d",iNO1);
        return iNO1;
    }

    else if((iNO2 >= iNO3) && (iNO2>=iNO1) )
    {
         printf("Largest is : %d",iNO2);
        return iNO2;
    }

    else {
        printf("largest is : %d",iNO3);
    }


}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter your first Number: ");
    scanf("%d",&iValue1);

    printf("Enter your second Number: ");
    scanf("%d",&iValue2);

    printf("Enter your third Number: ");
    scanf("%d",&iValue3);

    Largest(iValue1,iValue2,iValue3);



    return EXIT_SUCCESS;
}