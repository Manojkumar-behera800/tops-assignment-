#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b){
	cout <<"\n addition of "<<a<<"and " <<b<<"="<<a+b;
}
main(){
	add<int>(12,34);
	add<float>(2.1,2.4);
}
