#include<stdio.h>
int findFactorial(int n){
    int res=1;
    for(int i=1; i<=n;i++)res*=i;
    return res;
}
int main(){
    int num=5;
    printf("Factorial of %d is %d\n",num,findFactorial(num));
}
