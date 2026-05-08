#include<stdio.h>
struct user{
	char name[20];
	int uid;
	char email[30];
	int std;
};
main(){
	struct user u1={"kunj",101,"kunj@gmail.com",11};
	printf("\n size of =%s",struct user);
