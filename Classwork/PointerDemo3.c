#include<stdio.h>
int main(){

  
    char ch = 'A';
    int no = 11;
    float marks = 90.78f;
    double d  = 90.5678;



    char*cp = &ch;
    int *ip = &no;
    float*fp = &marks;
    double*dp = &d;

    printf("%d\n", sizeof(cp));
    printf("%d\n", sizeof(*cp));
    printf("%d\n", sizeof(cp));




          return 0;
          

}