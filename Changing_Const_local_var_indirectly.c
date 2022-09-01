// Online C compiler to run C program online
#include <stdio.h>

const int global_ = 7; //stored in program memory (.rodata) = ROM

int main() {

    const int local_ = 5; //stored in data memory (stack) = RAM
    
    //local_ = 10; //COMPILATION_ERROR - cannot be changed directly
    //global_ = 14; //COMPILATION_ERROR - cannot be changed directly
    
    int * pl = &local_; //pointer to int (to local var - to RAM)
    *pl=10; //will pass compilation and will be changed (indirectly)
    
    int * pg = &global_; //pointer to int (to global var which is located in ROM, then cannot point to it using pointer to data type)
    //*pg=14; //will pass compilation but gives Runtime error
    
    printf("%d\n", local_);
    printf("%d\n", global_);

    return 0;
}