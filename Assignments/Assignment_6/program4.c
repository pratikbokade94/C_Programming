/* Accept three integer values representing the lengths of the sides of a triangle. Determine whether they can form a valid triangle. All sides must be positive, and the sum of any two sides must be greater than the third side.

Expected Output:
 Input: 3 4 5 → Valid Triangle
 Input: 1 2 3 → Invalid Triangle
 Input: 0 4 5 → Invalid Triangle  */

#include<stdio.h>
#include<stdlib.h>

void checkTriangle(int side1, int side2, int side3)
{

     if(side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("Invalid side.");
        return;
    }

   if(side1 + side2 > side3  && side2 + side3 > side1 && side1 + side3 > side2)
   {
    printf("Valid triangle.");
   }
   else{
    printf("invalid triangle.");
   }
    
    
}

int main()
{
    int side1 =0, side2 = 0, side3 = 0;

    printf("Enter side 1:");
    scanf("%d", &side1);

     printf("Enter side 2:");
    scanf("%d", &side2);

     printf("Enter side 3:");
    scanf("%d", &side3);

    checkTriangle(side1,side2,side3);

    return EXIT_SUCCESS;
}
