#include<iostream>
using namespace std;
class Maths{
	public:
		int a;//normal variable 
		static int s;//static variable
		Maths(int a){
			this->a=a;
			
			cout<<"\n a="<<a<<"s="<<s;
		}
		static void printStatic(){
			cout<<"\n s="<<s;
		}
};
int Maths::s=10;
main(){
	Maths m1(2),m2(2),m3(4);
	Maths::printStatic();
}
