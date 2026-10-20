#include<stdio.h>

struct Demo{
    int no;
    int Arr[3];


};

int main() {

    struct Demo dobj;

    printf("%d\n", sizeof(dobj));

    dobj.no =11;

    dobj.Arr[0] = 11;
    dobj.Arr[1] = 11;
    dobj.Arr[2] = 11;

    printf("%d\n", dobj.Arr[1]);



    return 0;
}
