#include<stdio.h>
// to print 1 to 10
main(){
	int i,enroll,j;
	for(i=1;i<=10;i++){
		printf("\n i=%d",i);
	}
	for(j=1;j>=20;j--){
		printf("\n j=%d",j);
	}
	for(i=1;i<=6;i++){
		printf("\n enter enroll of student no =%d=",i);
		scanf("%d",&enroll);
		printf("\n %d of enroll=%d",i,enroll);
	}
	
}
