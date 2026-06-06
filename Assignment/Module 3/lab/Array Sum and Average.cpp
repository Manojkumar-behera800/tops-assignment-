#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum = 0;
    cout <<"\n Enter 5 Numbers:";

    for (int i=0;i<5;i++){
        cin>>arr[i];
        sum +=arr[i];
    }
    cout<<"Sum = "<<sum;
    cout<<"Average = "<<(float)sum/5;
}
