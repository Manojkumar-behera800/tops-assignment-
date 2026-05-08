#include<stdio.h>
main(){
//datatype arrayname[size]
int a[5];
int i;
char ch[5];
float x[5];
printf("\n char array\n");
for(i=0;i<5;i++){
	printf("\n enter char[%d]",i);
	scanf("%c",&ch[i]);
}
for(i=0;i<5;i++){
	printf("\n ch[%d]=%c",i,ch[i]);
}
printf("\n integer array\n");
for(i=0;i<5;i++){
	printf("\n enter a[%d]",i);
	scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
	printf("\n a[%d]=%d",i,a[i]);
}
printf("\n float array\n ");
for(i=0;i<5;i++){
	printf("\n enter x[%d]",i);
	scanf("%f",&x[i]);
}
for(i=0;i<5;i++){
	printf("\n x[%d]=%f",i,x[i]);
}
	
}
