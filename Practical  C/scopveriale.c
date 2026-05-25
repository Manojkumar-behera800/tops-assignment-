#include<stdio.h>
float pi=3.14;// global veriable 
void test (){
	printf("\n global veriable in function pi=%f",pi);
}
void add(int a,int b){//a and b formal parameter
	int c=a+b;
	printf("\n addition=%d",c);
	
}
main(){
	int x=10;//local veriable 
	{
		int y=90;//local veriable 
		printf("\n y=%d",y);
		
	}
	printf("\n global veriale pi=%f",pi);
	test();
	add(20,10);
}
