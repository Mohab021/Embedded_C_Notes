// Online C compiler to run C program online
#include <stdio.h>

typedef enum{
    a=500,b,c=5
}s1;

typedef enum{
    e,f=100000000000000,g
}s2;

int main() {

    s1 k1=b;
    s2 k2=f;
    //b=400; gives error as enum elments cannot be changed in run-time
    printf("%lld\n", k1);
    printf("%lld\n", k2);

    printf("s1 size is %lld\n", sizeof k1);
    printf("s2 size is %lld\n", sizeof k2);
    
    printf("%lld\n", a);
    printf("%lld\n", b);
    printf("%lld\n", c);
    printf("%lld\n", e);
    printf("%lld\n", f);
    printf("%lld\n", g);
    
    return 0;
}