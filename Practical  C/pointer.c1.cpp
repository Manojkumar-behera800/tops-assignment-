#include<stdio.h>
main(){
	int a=10;
	int *ptr;
	ptr =&a;
	
	float x=2.3;
	float *ptr2;
	ptr2 =&x;
	
	printf("\n value of ptr2=%f",*ptr2);
}
