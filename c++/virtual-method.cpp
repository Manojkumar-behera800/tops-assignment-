#include<iostream>
using namespace std;
class Parents{
	public:
		virtual void display(){
			cout<<"\n parents class method called";
		}
		
};
class Child:public Parents{
	public:
		void display(){
			cout<<"\n child class method called ";
		}
};
main(){
	Child c1;
	c1.display();
	
}
