#include<stdio.h>
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int sum=0;

    printf("1D Array:");
    for(int i=0;i<5;i++) printf("%d",arr[i]);

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)sum+=matrix[i][j];

    printf("\nSum of 3x3 Matrix: %d\n",sum);
}
