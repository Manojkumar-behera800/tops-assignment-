#include<stdio.h>
main(){
	int i,num;
	for(i=1;i<=15;i++){
		if(i==15){
			continue;
		}
		printf("\n i=%d",i);
	}
	for(;;){
		printf("\n enter num");
		scanf("%d",&num);
		if(num==0){
			break;
		}
	}
}




