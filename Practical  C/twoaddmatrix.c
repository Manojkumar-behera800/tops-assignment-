#include<stdio.h>
main(){
	int a[2][2],i,j;
	printf("\n eneter 2d matrix \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t enter a[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
