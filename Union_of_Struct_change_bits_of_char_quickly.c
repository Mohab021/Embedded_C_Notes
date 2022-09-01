// Online C compiler to run C program online
#include <stdio.h>

typedef union{
    unsigned char n;
    struct bin{
        unsigned char b0:1;
        unsigned char b1:1;
        unsigned char b2:1;
        unsigned char b3:1;
        unsigned char b4:1;
        unsigned char b5:1;
        unsigned char b6:1;
        unsigned char b7:1;
    }S;
}U;

int main() {
    U obj;
    obj.n=0b00000011; //initialize as 3
    printf("%d\n", obj.n);
    
    obj.S.b0=0; //becomes 2
    printf("%d\n", obj.n);
    
    obj.S.b2=1; //becomes 6
    printf("%d\n", obj.n);

    return 0;
}