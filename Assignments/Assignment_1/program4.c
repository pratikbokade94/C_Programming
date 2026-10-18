#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int iNO)
{
    if( (iNO % 5 ==0) )
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the no: \n");
    scanf("%d", &iValue);

      bRet = Check(iValue);

    if (bRet == true)
    {
        printf("divisible by 5");
    }
    else{
        printf("Not divisible by 5");
    }


    return EXIT_SUCCESS;
}