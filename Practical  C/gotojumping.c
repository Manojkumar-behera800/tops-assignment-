#include<stdio.h>
main(){
	int num;
	printf("\n eneter the num:");
	scanf("%d",&num);
	if(num%2==0){
		goto even;
	}
	else{
		goto odd;
	}
	even:{
		printf("\n num is even");
		return;
	}
	odd:{
		printf("\n num id odd");
		return;
	}
	
}


