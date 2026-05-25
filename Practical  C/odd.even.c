#include<stdio.h>
main(){
	int x,y;
	printf(" \n Enter the Number x and y ");
	scanf("%d%d",&x,&y);
	if(x>y){
		printf("\n large number %d ",x);
	}
	else if (y<x) {
		printf("\n eneter large number %d",y);
	}
	else{
		printf("\n both number are equal");
	}
}
