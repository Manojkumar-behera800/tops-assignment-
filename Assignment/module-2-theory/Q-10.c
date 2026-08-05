#include<stdio.h>
int main(){
    int val =100;
    int *ptr=&val;
    printf("\n Original Value:%d",val);
    *ptr =200;
    printf("\n Modified Value:%d",val);
}
