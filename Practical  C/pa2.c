#include<stdio.h>
main(){
	int x,y;
	for(x=1;x<=5;x++){
		for(y=5;y>=x;y--){
			printf("* ");
		}
		printf("\n");
	}
	
}
