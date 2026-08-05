#include<stdio.h>
/*
EXIT CONTROL LOOP
parts of loop:init condition modification
do{
   //block
}while(cond)
*/
//To print 1 to 10
main(){	
	int i=1;//init
	do{
		printf("\n i=%d",i);
		i++;
	}while(i<=10);
}
