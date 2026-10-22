/* A student is eligible for admission if the student's marks are at least 60 and age is at least 17 years.
 Accept both values and determine eligibility. Negative age or marks outside 0–100 must be treated as invalid input.

Expected Output:
 Input: 75 18 → Eligible for Admission
 Input: 55 19 → Not Eligible
 Input: 80 16 → Not Eligible */

#include<stdio.h>
#include<stdlib.h>

void checkAdmissionEligibility(int marks, int age)
{

    if(marks <0 || marks > 100 ||  age <0)
    {
        printf("Invalid data.");
        return;
    }

    if(marks <60 || age <17)
    {
       printf("Not eligible.");
    }
    else
    {
        printf("Eligible for Admission.");
    }
    
}

int main()
{
    int mMarks = 0, aAge = 0;

    printf("Enter your mMarks : ");
    scanf("%d", &mMarks);

    printf("Enter your Age : ");
    scanf("%d", &aAge);

    checkAdmissionEligibility(mMarks,aAge);

    return EXIT_SUCCESS;
}
