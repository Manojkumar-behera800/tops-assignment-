#include<stdio.h>
main(){
	int num,rem,rev=0;
	printf("\n enter number :");
	scanf("%d",&num);// unit
	while(num !=0)// condition
	{
		rem=num%10;
		rev=rev*10+rem;
		//printf("\n rem=%d rev=%d,",rem,rev);
		num= num/10;// mofication
	}
	printf("\n rev num=%d",rev);
	
}
