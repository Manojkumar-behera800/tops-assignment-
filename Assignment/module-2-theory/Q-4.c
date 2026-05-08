#include<stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\n Sum: %d",a + b);
    
    printf("\n Is a > b? %d (1 for Yes, 0 for No)", a > b);
    
    printf("\n Both non-zero? %d", (a != 0 && b != 0));
}
