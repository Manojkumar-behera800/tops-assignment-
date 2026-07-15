#include<iostream>
using namespace std;
class BankAccount{
private:
    float balance;

public:
    BankAccount(){
        balance = 0;
    }

    void deposit(float amount){
        balance += amount;
    }

    void withdraw(float amount){
        if (amount <= balance)
            balance -= amount;
        else
            cout<<"Insufficient Balance\n";
    }

    void display(){
        cout<<"Balance = "<<balance;
    }
};
int main(){
    BankAccount b;

    b.deposit(5000);
    b.withdraw(1000);
    b.display();
}
