#include <stdio.h>

main() {
    int length, width, x;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    x = length * width;
    printf("x = %d", x);

}

