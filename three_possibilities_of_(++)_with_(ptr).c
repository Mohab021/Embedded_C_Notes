#include <stdio.h>
int main() {
   int arr[] = {20, 30, 40};
   int *p = arr;
   int q;

   q = ++*p; // ++(*p);
   printf("arr[0] = %d, arr[1] = %d, *p = %d, q = %d \n",
   arr[0], arr[1], *p, q);
   // (21) 30 (21) 21 , p at arr[0]
   
   q = *p++; // =*(p++;)
   printf("arr[0] = %d, arr[1] = %d, *p = %d, q = %d \n",
   arr[0], arr[1], *p, q);
   // 21 (30) (30) 21 , p at arr[1]
   
   q = *++p; // =*(++p;)
   printf("arr[0] = %d, arr[1] = %d, *p = %d, q = %d \n",
   arr[0], arr[1], *p, q);
   // 21 30 (40) 40 , p at arr[2]
   
   return 0;
}