// Accept one character from the user and check whether that character is a vowel (a, e, i, o, u) or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool DisplayVowelsOrNot( char ch)
{                                                               
    if (ch == 'a' || ch == 'A' ||
        ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' ||
        ch == 'u' || ch == 'U'
        )
   
    {
        return true ;
    }
    else{
        return false;
    }
}

int main()
{
    int cValue = '\0';
    bool bRet = false; 

    printf("enter your character :");
    scanf("%c",&cValue);
    
     bRet = DisplayVowelsOrNot(cValue);

    if(bRet == true)
    {
        printf("vowel");
    }
    else{
        printf("No vowel");
    }


    return EXIT_SUCCESS;
}


/*
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

bool DisplayVowelsOrNot(char ch)
{
    ch = tolower(ch);

    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u');
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf(" %c", &cValue);

    printf("%s", DisplayVowelsOrNot(cValue) ? "TRUE" : "FALSE");

    return EXIT_SUCCESS;
}
*/