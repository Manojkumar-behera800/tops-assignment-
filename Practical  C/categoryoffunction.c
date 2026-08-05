#include<stdio.h>
// without returntype without parameter
void printmsg(){
	printf("\n hello world");
}
// without returntype with parameter
void add(int a, int b){
	int c= a+b;
	printf("\n addition=%d",c);
}
// with returntype with parameter
int square(int num){
	int s;
	s=num*num;
	return s;
}
// with returntype without parameter
float areaofcircle(){
	int r;
	float area;
	printf("\n eneter the value of r");
	scanf("%d",&r);
	area=3.14*r*r;
	return area;
}
main(){
	printmsg();
	add(12,45);
	int s=square(12);
	printf("\n square=%d",s);
	float a=areaofcircle();
	printf("\n areaof circle=%f",a);
}
