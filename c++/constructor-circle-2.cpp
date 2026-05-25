#include<iostream>
using namespace std;
class Areaofcircle{
	public:
		int r;//data member 
		//default constructor
		Areaofcircle(){
			cout<<"\n Enter radius";
			cin>>r;
		}
		Areaofcircle(int radius){
			r=radius;
		}
		void findArea(){
			float a=3.14*r*r;
			cout<<"\n Area of circle"<<a;
		}
};
main(){
	Areaofcircle a1;
	a1.findArea();
	Areaofcircle a2(20);
	a2.findArea();
}
