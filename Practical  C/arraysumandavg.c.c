#include<stdio.h>
main(){
	int mark[5],i;
	float sum=0,avg;
	printf("student resualt is");
	for(i=0;i<5;i++){
		printf("\n enter mark[%d]",i);
		scanf("%d",&mark[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+mark[i];
	}
	avg=sum/5;
	printf("\n sum=%f",sum);
	printf("\n avg=%f",avg);
}
