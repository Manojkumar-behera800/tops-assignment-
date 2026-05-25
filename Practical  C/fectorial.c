#include<stdio.h>
int factfind(num){
	int f;
	if (num==1){
		return 1;
	}
	f=num*factfind(num-1);
	return f;
	
}
main(){
	int f= factfind(5);
	printf("\n fectorial =%d",f);
}
