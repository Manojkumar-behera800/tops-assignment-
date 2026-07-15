#include<iostream>
using namespace std;
class Rectangle{
public:
    float length,width;

    void input(){
        cin>>length>>width;
    }

    void area(){
        cout<<"Area ="<<length * width;
    }
};

int main(){
    Rectangle r;

    cout<<"Enter Length and Width:";
    r.input();
    r.area();
}
