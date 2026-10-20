#include<stdio.h>

void Addition(int No1, int No2){
    int result = 0;
    result = No1 + No2;  // Buisness logic

    printf("Addition is: %d\n", result);

}

int main(){

    int value1 = 0, value2 =0;

    printf("Enter first no:\n");
    scanf("%d",&value1);

    printf("Enter second no:\n");
    scanf("%d",&value2);

   Addition(value1, value2);
    


    return 0;

}