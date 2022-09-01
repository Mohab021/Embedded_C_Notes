# include <stdio.h>
typedef unsigned char uint8;

void main (){
    
    //changable string (Statically allocated) --> stored in stack segment
	uint8 arr[10]="123xx";
	char *p=arr;
	p[3]='4';
	p[4]='5';
	printf("\n%s",arr);
	
	//changable string (Dynamically allocated) --> stored in heap segment
	char *t=(char*) malloc(10 * sizeof(char));
	t[0]='1';
	t[1]='2';
	t[2]='3';
	t[3]='x';
	t[4]='x';
	t[3]='4';
	t[4]='5';
    printf("\n%s",t);
    
    //read only string (constant string) --> stored in read only segment
    char *r="123xx";
	//r[3]='4'; //gives Segmentation fault
	//r[4]='5'; //gives Segmentation fault
    printf("\n%s",r);
}
