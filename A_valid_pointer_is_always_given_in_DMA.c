#include <stdio.h>

int main() {
    
    char *ptr1=(char *) malloc(0*sizeof(char)); //zero allocation
    if(ptr1==NULL){ puts("Got a null pointer"); }
    else{ puts("Got a valid pointer"); }
    
    char *ptr2=(char *) malloc(1*sizeof(char)); //valid allocation
    if(ptr2==NULL){ puts("Got a null pointer"); }
    else{ puts("Got a valid pointer"); }

    return 0;
}