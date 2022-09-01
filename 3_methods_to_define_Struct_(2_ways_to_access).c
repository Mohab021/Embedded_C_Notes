// Online C compiler to run C program online
#include <stdio.h>

struct{
    char *name;
    int x, y;
    int h, w;
}box1, *b1;

typedef struct{
    char *name;
    int x, y;
    int h, w;
}s2;

struct s3{
    char *name;
    int x, y;
    int h, w;
};

int main() {
    
    //struct 1
    b1=&box1; box1.x=5; b1->w=7;
    printf("%d %d\n", box1.x, b1->w);
    
    //struct 2
    s2 box2; s2*b2=&box2;
    box2.x=5; b2->w=7;
    printf("%d %d\n", box2.x, b2->w);
    
    //struct 3
    struct s3 box3; struct s3*b3=&box3;
    box3.x=5; b3->w=7;
    printf("%d %d\n", box3.x, b3->w);

    return 0;
}