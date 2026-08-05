#include<stdio.h>
main(){
	int num[5],i;
	int min=num[0];
	printf("enter element of array is :");
	for(i=0;i<5;i++){
		printf("\n num[%d]",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++){
		if(num[i]<min){
			min=num[i];
		}
		
	}
	printf("\n smallest number =%d",min);

//	int num[5]={45,12,89,7,34},i;
//	int min=num[0];
//	for(i=0;i<5;i++){
//		if(num[i]<min){
//			min=num[i];
//		}
//	}
//	printf( "\n smallest number is=%d",min);
}

