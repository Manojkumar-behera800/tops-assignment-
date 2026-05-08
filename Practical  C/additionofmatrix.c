#include<stdio.h>
main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("\n enter 2d matrix  A \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter 2d matrix B \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];		
		}
	}
	printf("\n addition of two matrix \n ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n c[%d][%d]=%d",i,j,c[i][j]);
		}
		printf("\n");
	}
}
