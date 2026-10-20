#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckIsEven(int iNO1)
{
    if(iNO1 % 2 == 0)
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    int iValue1 = 0;
    bool iRet = false;

    
    printf("Enter your 1st number :");
    scanf("%d",&iValue1);

    iRet = CheckIsEven(iValue1);

    if (iRet == true)
    {
        printf("No is even");
    }
    else{
        printf("No is not even");
    }

    return EXIT_SUCCESS;
}