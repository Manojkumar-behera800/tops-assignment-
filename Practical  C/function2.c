#include<stdio.h>
int square (int num){
	int s;
	s=num*num;
	return s;
}
float areaofcircle(){
	int r;
	float area;
	printf("\n eneter redius");
	scanf("%d",&r);
	area = 3.14*r*r;
	return area;
}
main(){
	int ans=square(12);
	printf("\n square =%d",ans);
	float a=areaofcircle();
	printf("\n are =%f",a);
	
}
