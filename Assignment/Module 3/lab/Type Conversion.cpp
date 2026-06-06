#include<iostream>
using namespace std;
int main(){
    int a=10;
    float b=3.5;

    float result1= a+b;

    int result2=(int)b;

    cout<<"Implicit Conversion:"<<result1<<endl;
    cout<<"Explicit Conversion:"<<result2<<endl;
}
