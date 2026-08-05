#include<iostream>
using namespace std;
class Country{
	public:
		int cid;
		char cname[20];
		void getCountry(){
			cout<<"\n country id and name";
			cin>>cid>>cname;
		}
};
class State:public Country{
	public:
		int stateid;
		char stateName[20];
		void getState(){
			cout<<"\n Enter stateid and name";
			cin>>stateid>>stateName;
		}
};
class City:public State{
	public:
		int cityid;
		char address[50];
		char cityname[20];
		void getCity(){
			cout<<"\n Enter cityid and name";
			cin>>cityid>>cityname;
		}
		void getAddress(){
			cout<<"Enter address";
			cin.getline(address,50);
		}
		void printAddress(){
			cout<<"\n Address="<<address;
			cout<<"\n city:"<<cityname;
			cout<<"\n state:"<<stateName;
			cout<<"\n country:"<<cname;
		}
};
main(){
	City c1;
	c1.getAddress();
	c1.getCity();
	c1.getState();
	c1.getCountry();
	c1.printAddress();
}
