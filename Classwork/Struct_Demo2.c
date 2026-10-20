#include<stdio.h>

struct Demo
{
    int i;
    char ch;  //  char is 1 byte, but memory alloted for each is 4
    float f;
    
};


int main(){
    printf("%d\n", sizeof(struct Demo));
    
    return 0;
}