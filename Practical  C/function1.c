#include<stdio.h>
/*
returntype of functionname(p1,p2..){
// block
}
*/
// function declaration
void printmsg();
void add(int x,int y);
main(){
	printmsg();//colling
	add(20,40);
	add(200,400);
}
//function defination
void printmsg(){
	printf("\n Hellow world");
}
void add(int x,int y){
	printf("\n addition of %d and %d =%d",x,y,x+y);
}


