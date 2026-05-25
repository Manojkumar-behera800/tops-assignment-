#include<stdio.h>
main(){
	int num,i;
	printf("\n enetr num");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		printf("\n %d*%d =%d",num,i,i*num);
	}
}
