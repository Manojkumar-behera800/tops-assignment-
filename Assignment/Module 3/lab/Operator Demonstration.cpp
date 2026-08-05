#include<iostream>
using namespace std;
int main(){
    int a =10, b =5;

    cout<<"Arithmetic Operators";
    cout<<a + b;
    cout<<a - b;
    cout<<a * b;
    cout<<a / b;

    cout<<"Relational Operators";
    cout<<(a > b);
    cout<<(a < b);

    cout << "Logical Operators";
    cout << ((a > b) && (b > 0));

    cout << "Bitwise Operators";
    cout << (a & b);
    cout << (a | b);
}
