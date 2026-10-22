/* Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. 
Use character comparisons without using library character-classification functions.*/

#include<stdio.h>
#include<stdlib.h>

void checkCharacterType(char ch)
{
    
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case.");
    }
    else if( ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case.");
    }
    else if(ch >= '0' && ch <= '9' || ){
        printf("it is digit.");
    }
    else{
        printf("special symbol.");
    }

}

int main()
{
     
    char cValue = 0;

    printf("Enter your character: ");
    scanf("%c",&cValue);

    checkCharacterType(cValue);

    return EXIT_SUCCESS;
}