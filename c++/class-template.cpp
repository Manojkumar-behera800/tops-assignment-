#include<iostream>
using namespace std;
int i,j;
template<class T>
class Sort{
	public:
	T a[5],temp;
	Sort(){
		for(i=0;i<5;i++){
			cout<<"\n Enter array element";
			cin>>a[j];
		}
	}
	T sortArray(){
		for(i=0;i<5;i++){
			for(j=i+j;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	      }
	   }
	}
	T display(){
		for(i=0;i<5;i++){
			cout<<"\n a["<<i<<"]="<<a[i];
		}
	}
};
main(){
	Sort<char>c1;
	c1.sortArray();
	c1.display();
	
	Sort<int>d1;
	d1.sortArray();
	d1.display();
}
