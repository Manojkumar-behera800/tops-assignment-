#include<stdio.h>
/*

tops
t i=0 1
0 i=1 2
p i=2 3
s i=3 4
\0 i=4
*/
main(){
	char str[10],rev[10];
	int i=0,counter=0,j,k=0;
	printf("\n Enter string");
	scanf("%s",str);
	//gets(str);
	while(str[i] !='\0'){
		counter++;
		i++;
	}
	printf("\n length of str=%d i=%d",counter,i);
	i--;
	j=i;
	while(j>=0){
		rev[k]=str[j];
		printf("\n str[%d]=%c rev[%d]=%c",j,str[j],k,rev[k]);
		k++;
		j--;
	}
}
