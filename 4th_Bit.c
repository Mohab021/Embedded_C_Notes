// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n=23; //10111
    int ans;
    int shift=3;
    
    ans=((n&(1<<shift))>>shift);
    
    printf("%d", ans);

    return 0;
}