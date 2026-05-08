#include<stdio.h>
#include<string.h>
main(){
	char str[10]="tops";
	printf("\n lenght of str=%d",strlen("tops"));
	printf("\n str concat =%s",strcat(str,"carrer"));
	strupr(str);
	printf("\n upper case=%s",str);
	strrev(str);
	printf("\n rev str=%s",str);
	strlwr(str);
	printf("\n strcmp=%d",strcmp("abc","abc"));
}
