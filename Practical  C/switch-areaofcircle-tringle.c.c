#include<stdio.h>
main(){
	int choice;
	int l,b,r,area,side;
	printf("\n 1 .press area of circle ");
	printf("\n 2 .press area of rectangle ");
	printf("\n 3 .press area of sqaure ");
	printf("\n 4 .press area of tringle ");
	
	printf("\n Enter your choice");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n enter redious");
			scanf("%d",&r);
			area=3.14*r*r;
			printf("\n areaofcircle=%d",area);
			break;
		case 2:
			printf("\n Enter l and b");
			scanf("%d %d",&l,&b);
			area=l*b;
			printf("\n Areaofrectangle=%d",area);
			break;
		case 3:
			printf("\n enter side");
			scanf("%d",&side);
			printf("\n areaofsqare=%d",side*side);
			break;
	}
}

