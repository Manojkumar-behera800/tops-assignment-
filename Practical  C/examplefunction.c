#include<stdio.h>
main(){
	int choice;
	float area,hight,base,length,width,r;
	printf("\n 1. tringle \n 2. rectangle \n 3 circle");
	scanf("%d",&choice);

switch(choice){
	case 1:
	printf("\n Enter base and hight = ");
	scanf("%f%f",&base,&hight);
	area=0.5*base*hight;
	printf("area of tringle=%f",area);
	break;
	case 2:
		printf("\n Entre width and length");
		scanf("%f%f",&width,&length);
		area=width*length;
		printf("are of rectangle=%f",area);
		break;
		case 3:
			printf("\n enter r");
			scanf("%f",&r);
			area=3.14*r;
			printf("area of circle=%f",area);
			break;
			
			default:
				printf("\n no choice");
}

}
