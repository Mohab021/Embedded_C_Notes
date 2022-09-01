#include <stdio.h>

int main() {

    printf("While case post-dec...\n");
    int i=5;
    while(i--  >=  4){
        printf("hello %d\n", i);
    }
    printf("end %d\n\n", i);


    printf("While case pre-dec...\n");
    i=5;
    while(--i  >=  4){
        printf("hello %d\n", i);
    }
    printf("end %d\n\n", i);


    printf("If case post-dec...\n");
    int j=5;
    if(j--  >=  4){ //note that If is not While (only one loop XD)
        printf("hello %d\n", j);
    }
    printf("end %d\n\n", j);


    printf("If case pre-dec...\n");
    j=5;
    if(--j  >=  4){ //note that If is not While (only one loop XD)
        printf("hello %d\n", j);
    }
    printf("end %d", j);


    return 0;
}