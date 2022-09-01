// Online C compiler to run C program online
#include <stdio.h>

typedef struct{
    char *name; //char name[3] or char name[3]="abc" gives error
    int x, y;
}s2;

int main() {
    //struct 2
    s2 box2={"abc",1,2}; s2*b2=&box2;
    printf("%s %d %d\n", box2.name, box2.x, b2->y);
    
    box2.name="xyz"; box2.x=5; b2->y=7; //char *name is not a read only data in case of strcut
    printf("%s %d %d\n", box2.name, box2.x, b2->y);
    
    return 0;
}