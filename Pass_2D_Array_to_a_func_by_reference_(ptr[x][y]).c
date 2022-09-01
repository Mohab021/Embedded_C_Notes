// Online C compiler to run C program online
#include <stdio.h>

int f( int (*ptr) [3] ){
    //ptr is a pointer to array of 3 integers
    //it points to {1, 2, 3} and {4, 5, 6}
    
    int k=0;
    k+=ptr[0][0];
    k+=ptr[0][1];
    k+=ptr[0][2];
    k+=ptr[1][0];
    k+=ptr[1][1];
    k+=ptr[1][2];
    return k;
}

int main() {
    
    int a[2][3]={{1, 2, 3}, {4, 5, 6}};
    int res=f(a);
    
    printf("%d", res);

    return 0;
}