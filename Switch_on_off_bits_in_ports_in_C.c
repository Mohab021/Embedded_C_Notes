// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    char a=4; //..0100 = 4
    
    //a |= (1<<1); //..0110 = 6
    //a &= ~(1<<2); //..0010 = 2 = right as (~) is bitwise like | and &
    //a &= !(1<<2); //..0000 = 0 = wrong as (!) is logical like || and &&
    
    printf("%d",a);

    return 0;
}