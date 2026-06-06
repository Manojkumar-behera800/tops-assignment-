#include<iostream>
using namespace std;
int main(){
    int secret=50;
    int guess;

    while (guess!=secret){
        cout<<"Guess Number:";
        cin>>guess;

        if(guess>secret){
            cout<<"\n Too High";
        }
        else if (guess < secret){
            cout<<"\n Too Low";
        }
        else{
            cout<<"\n Correct!";
        }
    }
}
