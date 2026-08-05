#include<stdio.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct Student s[3]={
        {"Alice",1,85.5},
        {"Bob",2,90.0},
        {"Charlie",3,78.2}
    };
    for(int i i=0;i<3;i++){
        printf("\n Roll %d: %s (%.1f)",s[i].roll,s[i].name,s[i].marks);
    }
}
