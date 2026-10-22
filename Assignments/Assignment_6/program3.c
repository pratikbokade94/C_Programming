/*  Accept the total purchase amount and calculate the final payable amount after applying the following discount. 
   Negative purchase amounts are invalid.
 Below ₹1000: 0% discount
 ₹1000 to below ₹5000: 10% discount
 ₹5000 and above: 20% discount
*/

#include<stdio.h>
#include<stdlib.h>

void checkDiscount(float fAmount)
{
    float fDiscount = 0.0f; 
    float fFinalAmount = 0.0f;

    if(fAmount<0)
    {
        printf("Invalid amount.");
        return;
    }

    else if(fAmount <1000)
    {
        fDiscount = 0;
        

    }
    else if(fAmount >=1000 && fAmount <=5000)
    {
        fDiscount = (fAmount * 10)/100;
         

    }
    else{
        fDiscount = (fAmount * 20)/100;
        
    }

      fFinalAmount = fAmount - fDiscount;
      printf("payable amount is :%f" ,fFinalAmount);
   
    
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter your perchase amount: ");
    scanf("%f", &fAmount);

    checkDiscount(fAmount);

    return EXIT_SUCCESS;
}
