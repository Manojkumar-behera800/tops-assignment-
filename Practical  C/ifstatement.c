#include<stdio.h>
/*
    if(condition){
    //block
}
*/
//find square of only positive value 
main(){
	int num;
	printf("\n enter the value of num= ");
	scanf("%d",&num);
	if(num >0){
		printf("\n square of %d =%d" ,num,num*num);
	}
}
