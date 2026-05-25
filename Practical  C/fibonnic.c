#include<stdio.h>
// to print fibonacci sequence 0 1 1 2 3 5 8 12 20
main(){
	int x1 = 0 ,x2 = 1,ans,i;
	printf("\n %d \t %d",x1,x2);
	for(i=1;i<=23;i++){
		ans =x1+x2;
		printf("\t %d ",ans);
		x1=x2;
		x2=ans;
	}
}
