#include<stdio.h>
main(){
	int mark[5],i;
	float sum=0,avg;
	printf("Element of array :");
	for(i=0;i<5;i++){
		printf("\n mark[%d]=%d",i);
		scanf("%d",&mark[i]);
	}
	avg=sum/5;
	printf("\n avg=%d",avg);
}
