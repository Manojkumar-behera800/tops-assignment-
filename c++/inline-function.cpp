#include<iostream>
using namespace std;
class Test{
	protected:
		int x;
	public:
		
	     Test(){
	     	x=100;
		 }
		 inline void display(){
		 	cout<<"\n test method";
		 }	
};
class child:public Test{
	public :
		void childmethod(){
			cout<<"\n patenets prcted data ="<<x;
		}
};
main(){
	Test t1;
	int i;
	for(i=1;i<3;i++){
		t1.display();
	}
	child c1;
	c1.childmethod();
}
