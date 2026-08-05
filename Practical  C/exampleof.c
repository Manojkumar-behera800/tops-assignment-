#include<stdio.h>
main(){
	int num;
	printf("\n enter the number");
	scanf("%d",&num);
	if(num>=0){
		printf("\n posetive");
	}
	else if(num<0){
		printf("\n negetive");
	}
	else{
		printf("0 number");
	}
}
