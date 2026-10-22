/* Accept the number of electricity units consumed and calculate the total bill using the following slab-wise rates. 
  Each slab rate applies only to the units within that slab.

 First 100 units: ₹5 per unit
 Next 100 units: ₹7 per unit
 Above 200 units: ₹10 per unit   */

#include<stdio.h>
#include<stdlib.h>

void checkElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid units.");
        return;
    }

    if(iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }

    printf("Bill = %.2f", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter your units: ");
    scanf("%d", &iUnits);

    checkElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
