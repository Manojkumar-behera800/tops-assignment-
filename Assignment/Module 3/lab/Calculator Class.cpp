#include<iostream>
using namespace std;
class Calculator{
public:
    int add(int a, int b) {
        return a + b;
    }

    int sub(int a, int b) {
        return a - b;
    }

    int mul(int a, int b) {
        return a * b;
    }

    float divi(int a, int b) {
        return (float)a / b;
    }
};
int main() {
    Calculator c1;

    cout<<"Addition = "<<c1.add(10, 5);
    cout<<"Subtraction = "<<c1.sub(10, 5);
    cout<<"Multiplication = "<<c1.mul(10, 5);
    cout<<"Division = " <<c1.divi(10, 5);
}
