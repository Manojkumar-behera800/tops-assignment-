#include<stdio.h>
main(){

char ch[5];
int i,sum=0;
printf("\n char array");
for(i=0;i<5;i++){
	printf("\n enter ch[%d]",i);
	scanf(" %c",&ch[i]);
	sum=sum+ch[i];
}
for (i=0;i<5;i++){
	printf("\n a[%d]=%c",i,ch[i]);
}
printf("\n addition array eliment =%c",sum);

}
