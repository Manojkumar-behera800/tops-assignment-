#include<stdio.h>
int main(){
    int num,month;
    printf("Enter a number to check Even/Odd: ");
    scanf("%d", &num);
    if(num%2==0){
	printf("\n Even");
}
    else{
	printf("\n Odd");
    }
    printf("Enter month number (1-12):");
    scanf("%d", &month);
    switch(month){
        case 1: printf("\n January"); 
		break;
        case 2: printf("\ February"); 
		break;
		case 3: printf("\n March"); 
		break;
		case 4: printf("\n April"); 
		break;
		case 5: printf("\n May"); 
		break;
		case 6: printf("\n June"); 
		break;
		case 7: printf("\n July"); 
		break;
		case 8: printf("\n August"); 
		break;
		case 9: printf("\n September"); 
		break;
		case 10: printf("\n October"); 
		break;
		case 11: printf("\n November"); 
		break;
        case 12: printf("\n December"); 
		break;
        default: printf("Invalid month!\n");
    }
}
