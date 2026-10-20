#include<stdio.h>

int addition(int value1 , int value2){
    int result =0;
    result = value1 + value2;
    return result;


}

int main(){

    int no1 = 10;
    int no2 = 11;
    int ans = 0;

    ans = addition(no1, no2);
    printf("addition is %d ", ans );

    return 0;


}