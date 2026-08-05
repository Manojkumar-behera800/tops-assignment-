#include<iostream>
#include<fstream>
using namespace std;
main(){
	char name[20];
	char email[20];
	string data;
	fstream fp1;
	fp1.open("userinfo.txt",ios::app);
	cout<<"\n Enter name and email";
	cin>>name>>email;
	fp1<<"\n"<<name<<" "<<email;
	fp1.close();
	
	fstream fp2;
	fp2.open("userinfo.txt",ios::in);
	while(getline(fp2,data)){
		cout<<"\n "<<data;
	}
	fp2.close();
}
