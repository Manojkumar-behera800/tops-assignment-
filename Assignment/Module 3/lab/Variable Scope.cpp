#include<iostream>
using namespace std;
int globalVar=100;

void display(){
    int localVar=50;

    cout<<"Global Variable ="<<globalVar;
    cout<<"Local Variable ="<<localVar;
}
int main(){
    display();
}
