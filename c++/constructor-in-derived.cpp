#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"\n parent class constructor called";
		}
		Parent(int z){
			cout <<"\n in parent class z="<<z;
		}
};
class child : Parent{
	public:
		child(){
			cout<<"\n child class constructor called";
		}
		child (int x,int y,int z):Parent(z){
			cout<<"\n x="<<x<<"t";
		}
};
main(){
     child c1;
	 child c2(1,2,3);	
}
