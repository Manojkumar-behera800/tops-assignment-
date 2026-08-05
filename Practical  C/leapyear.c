#include<stdio.h>
main(){
	int year;
	printf("\n Enter the year");
	scanf("%d",&year);
	if((year%400==0) || (year%4==0 && year%100!=0)){
		printf("\n is leap year");
	}
	else{
		printf("\n not leap year");
	}
	
}
