// Online C compiler to run C program online
#include <stdio.h>

typedef struct{
    char name[4]; //char name[3]="abc" gives error as we can't assign array here
    int x, y;
}s2;

int main() {
    //struct 2
    s2 box2={"abc",1,2}; s2*b2=&box2;
    printf("%s %d %d\n", box2.name, box2.x, b2->y);
    
    //box2.name="xyz"; //gives error as we can't assign the string like that
    box2.name[0]='x';
    box2.name[1]='y';
    box2.name[2]='z';
    
    box2.x=5; b2->y=7;
    printf("%s %d %d\n", box2.name, box2.x, b2->y);
    
    return 0;
}