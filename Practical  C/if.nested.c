#include<stdio.h>
/*
nasted if
    if (condition){
      if(condition){
   }
}
*/
// find square of only positive value 
main(){
	int maths,phy,chem,total,subtotal;
	printf("\n enter marks of maths phy chem");
	scanf("%d %d %d",&maths,&phy,&chem);
	if(maths >=65 && phy >= 55 && chem >=50){
		total=maths+phy+chem;//173
		subtotal =maths+phy;//122
		if(subtotal>=154 || total >=190){
			printf("\n eligible for admision ");
			
		}
		else{
			printf("\n inner not eligible for admision ");
			
		}
	}
	else{
		printf("\n outer not eligible for admission");
	}
	
}
  
