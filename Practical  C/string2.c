#include<stdio.h>
main(){
	/*
	tops
	t i=0
	*/
	char str[10];
	int i=0,counter=0;
	printf("\n enter string :");
	scanf("%s",str);
	//gets(str);
	while(str[i] !='\0'){
		counter++;
		i++;
	}
	printf("\n leanth of string str=%d",counter);
}
