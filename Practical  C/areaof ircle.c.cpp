#include<stdio.h>
/*
input :redious
const pi.3.14
output areacircle 
*/
main(){
	int r;
	const float pi=3.14;
	float area;
	printf("\n enter the value of radius");
	scanf("%d",&r);
	area =pi* r* r;
	printf("\n area of circle=%.6f",area);
}
