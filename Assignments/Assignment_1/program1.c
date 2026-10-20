//  program to divide two number.


/* 
    Step 1 :   Understand the problem Statement
    Step 2 :   write the algorithm
    Step 3 :   Decide the programming language 
    Step 4 :   write the program 
    Step 5 :   Test the program

*/


////////////////////////////////////////////////////////////////////////////
//
//   Step 1 :   Understand the problem Statement
//              user is going to enter any 2 integers
//              and we have to performe addition 
//
/////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
//
//    Step 2 :   write the algorithm
//
//      START
    // Accept first number  as No1
    // Accept second number as no2
    // Create the variable as Ans to store the result
    // Perform the addition and store into Ans 
    // Display the result from Asn.

//     END

////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
//
//    Step 3 :   Decide the programming language 
//               we select C programming
//
////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//    Step 4 :   write the program 
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int Divide(int iNo1, int iNo2)
{
        int iAns = 0;
        
        if (iNo2 == 0)
        {
            return -1;
        }

        iAns = iNo1 / iNo2;

        return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d", iRet);

    return EXIT_SUCCESS;
}
