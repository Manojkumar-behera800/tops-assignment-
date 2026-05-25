#include<iostream>
//using namespace std;
int gVr =100;//global vesiable

class Test{
	public:
		void display();
};
// to define function outside the class
void Test::display(){
	std::cout<<"\n Method define outside the class";
}
main(){
	//access global veriable
	std::cout<<"\n gvr=<<"<<::gVr;
	Test t1;
	t1.display();
}

