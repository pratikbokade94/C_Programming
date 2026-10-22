/* Question 4: Accept one character from user and convert case of that character.

Input: a → Output: A
Input: D → Output: d */

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenFactors(char cValue){
    
    
   if( cValue >= 'a' && cValue <= 'z')
   {
    printf("%c", cValue - 32);
   }

   if( cValue >= 'A' && cValue <= 'Z')
   {
    printf("%c", cValue + 32);
   }

}

int main()
{

    char cValue = '\0';

    printf("enter the Character :");
    scanf("%c",&cValue);

    DisplayEvenFactors(cValue);

    return EXIT_SUCCESS;
}