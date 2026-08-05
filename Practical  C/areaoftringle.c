#include<stdio.h>
float areaoftringle(){
	int b,h;
	float area;
	printf("\n eneter the value of b and h");
	scanf("%d %d",&b,&h);
	area=0.5*b*h;
	return area;
}
main(){
	float a=areaoftringle();
	printf("\n areaof tringle=%f",a);
}
