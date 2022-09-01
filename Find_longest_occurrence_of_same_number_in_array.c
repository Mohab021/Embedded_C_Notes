// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int a[] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
    int l=sizeof(a)/sizeof(a[0]);
    
    int c=0;
    int s=3;
    int ans=0;
    
    for(int x=0 ; x<l ; x++){
        if(a[x]==s){ c++; }
        else{
            if(c>ans){ ans=c; }
            c=0;
        }
    }
    
    if(c>ans){ ans=c; }
    
    printf("%d", ans);

    return 0;
}