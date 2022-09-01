#include <stdio.h>

int main() {
    
    char b[100]="";
    char s[100]="123";
    
    printf("b= %s\n", b);
    printf("s= %s\n", s);
    
    strcat(b,"0"); //++ "0"
    strcat(s,"4"); //++ "4"
    printf("b= %s\n", b);
    printf("s= %s\n", s);
    
    strcat(b,s); //b = b+s
    strcpy(s,b); //s = b
    printf("b= %s\n", b);
    printf("s= %s\n", s);
    
    strcpy(b,""); //delete b
    strcpy(s,""); //delete s
    
    printf("len of b= %d\n", strlen(b));
    printf("len of s= %d\n", strlen(s));

    return 0;
}