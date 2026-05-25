#include<stdio.h>
// a = r*r;
main()
{
	float a, r, l, w, rect;
	printf("enter the value of r=");
	scanf("%f", &r);
	
	a = r*r;    //area of sqaure
	printf("\n area of square =%f",a);
	
	// area of rectangle
	printf("\n enter the value of l=");
	scanf("%f", &l);
	printf("\n enter the value of w=");
	scanf("%f", &w);
	
	//calculation
	rect = l*w;
	printf("\n area of rectangle =%f", rect);
	
	
	
	
	
}
