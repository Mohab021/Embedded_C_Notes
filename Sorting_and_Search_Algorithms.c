// Online C compiler to run C program online
#include <stdio.h>

//search algo (linear, binary, two pointer)
//sort algo (bubble, insertion, merge)

void swap(int * a, int * b){
    int t=*a;
    *a=*b;
    *b=t;
}

void _bubble_sort(int l, int * a){
    for(int x=0 ; x<l-1 ; x++){
        for(int y=0 ; y<l-1-x ; y++){
            if(a[y]>a[y+1]){
                swap(&a[y], &a[y+1]);
            }
        }
    }
}

void _insertion_sort(int l, int * a){
    int t,y;
    for(int x=1 ; x<l ; x++){
        t=a[x];
        y=x-1;
        
        while(a[y]>t && y>=0){
            a[y+1]=a[y];
            y--;
        }
        a[y+1]=t; //insert temp here
    }
}

int _linear_search(int l, int * a, int target){
    int res = -1; //in case of not found
    for(int x=0 ; x<l ; x++){
        if(target==a[x]){
            res=x; //return its index
            break;
        } 
    }
    return res;
}

int _binary_search(int s, int e, int * a, int target){
    int res = -1; //in case of not found
    while(e>=s){
        int m=(s+e)/2; //med index
        if(target==a[m]){
            res=m; //return its index
            break;
        }
        
        if(target>a[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return res;
}

void _two_pointers_search(int s, int e, int * p1, int * p2, int * a, int target){
    while(e>s){
        if(a[s]+a[e]==target){
            *p1=s; //return their indices
            *p2=e;
            break;
        }
        
        if(a[s]+a[e]>target){
            e--;
        }
        else{
            s++;
        }
    }
}

int main() {
    
    int a[10]={1,5,-4,0,3,100,10,11,13,9};
    int l=10;
    int target=100;
    int res;
    int i1=-1, i2=-1;
    
    //_bubble_sort(l, a); //Time: O(N^2), Space: O(1)
    //_insertion_sort(l, a); //Time: O(N^2), Space: O(1)
    //_merge_sort(no implementation) //Time: O(N log(N)), Space: O(N)
    
    /*
    res = _linear_search(l, a, target); //Time: O(N), Space: O(1)
    printf("%d\n", res);
    */
    
    /*
    res = _binary_search(0, l-1, a, target); //Time: O(log(N)), Space: O(1)
    printf("%d\n", res);
    */
    
    /*
    _two_pointers_search(0, l-1, &i1, &i2, a, target); //Time: O(N), Space: O(1)
    printf("%d %d\n", i1, i2);
    */
    
    /*
    for(int x=0 ; x<l ; x++){
        printf("%d ", a[x]);
    }
    */

    return 0;
}