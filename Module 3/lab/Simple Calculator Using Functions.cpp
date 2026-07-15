#include<iostream>
using namespace std;
int add(int a,int b){
    return a + b;
}
int sub(int a,int b){
    return a - b;
}
int mul(int a,int b){
    return a * b;
}
float divi(int a,int b){
    return (float)a / b;
}
int main(){
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;

    cout<<"Addition = "<<add(a, b);
    cout<<"Subtraction = "<<sub(a, b);
    cout<<"Multiplication = "<<mul(a, b);
    cout<<"Division = "<<divi(a,b);
}
