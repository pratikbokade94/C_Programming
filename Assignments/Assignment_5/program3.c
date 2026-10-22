/* Accept the marks of a student out of 100 and display the grade according to the following criteria.
   Marks outside 0–100 are invalid.
 90–100: Grade A
 75–89: Grade B
 60–74: Grade C
 40–59: Grade D
 Below 40: Fail */

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(int iNO)
{

    if(iNO <0 || iNO > 100)
    {
        printf("invalid marks ");
        return;
    }
   if(iNO >=90 && iNO <=100)
   {
       printf("your grade is :%c",'A');
   
   }

   else if(iNO >=75 && iNO <=89)
   {
       printf("your grade is :%c",'B');
   }

    else if(iNO >=60 && iNO <=74)
   {
       printf("your grade is :%c",'c');
   }

   else if(iNO >=40 && iNO <=59)
   {
       printf("your grade is :%c",'D');
   }

   else{
    printf("fail");
   }


       
}

int main()
{

    int iValue = 0;
    
    printf("Enter your marks : ");
    scanf("%d",&iValue);

   DisplayGrade(iValue);

    return EXIT_SUCCESS;

}