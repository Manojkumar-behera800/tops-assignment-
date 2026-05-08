#include<stdio.h>
struct fruits{
	int fno;
	char fname[20];
	float price;
};
main(){
	struct fruits f[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n enter fruits no name and price of fruits:%d",i+1);
		scanf("%d %s %f",&f[i].fno,f[i].fname,&f[i].price);
	}
	printf("\n fruitno fruitname fruitprice");
	for(i=0;i<5;i++){
		printf("\n %d %s %f",f[i].fno,f[i].fname,f[i].price);
	}
}
