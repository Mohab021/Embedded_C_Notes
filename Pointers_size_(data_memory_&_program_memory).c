// Online C compiler to run C program online
#include <stdio.h>

int f(void){
    int k=5;
    return k;
}

int main() {
    // Write C code here
    int a=5; int *pi=&a;
    double d=5.5; double *pd=&d;
    void * pv; //pointer to data type
    int (*pf)(void); //pointer to function type
    pf=&f;

    printf("int %d\n", sizeof(a));
    printf("double %d\n", sizeof(d));
    printf("ptr to int %d\n", sizeof(pi));
    printf("ptr to double %d\n", sizeof(pd));
    printf("ptr to void %d\n", sizeof(pv));
    printf("ptr to func %d\n", sizeof(pf));

    return 0;
}