#include<stdio.h>
main(){
	float a=10.76675;
	int age=18,num=-100;
  printf("\n sizeof a=%d",sizeof(a));
  //(condition)?true:false;
  (age >= 18)?printf("\n eligible"):printf("\n not eligible");
   (num > 0)?printf("\n positive"):printf("\n negative");
}
