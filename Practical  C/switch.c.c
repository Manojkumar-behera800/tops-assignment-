#include<stdio.h>
/*
switch(char){
       case1:
        // block
       break;
	   case2:
	     //block
        break;
		    //block
		break
}
*/
main(){
	int x,y;
	char choice;
	printf("\n press + for add");
	printf("\n press - for sub");
	printf("\n press * for mult");
	printf("\n press / for div");
	
	printf("\n enetr the choice :");
	scanf("%c",& choice);
	
	printf("\n enter x and y");
	scanf("%d %d ", &x,&y);
	
	switch(choice){
		case '+':
		printf("\n add of %d and %d=%d ",x,y,x+y);
		break;
		case '-':
		printf("\n sub of %d and %d=%d ",x,y,x-y);
		break;
		case '*':
		printf("\n mult of %d and %d=%d ",x,y,x*y);
		break;
		case '/':
		printf("\n div of %d and %d=%d ",x,y,x/y);
		break;
		default:
			printf("\n invalid choice");
			break;
	}
	
}
