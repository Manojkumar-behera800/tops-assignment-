#include <stdio.h>
main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Logical Operators (&& aur ||) ka use karke ek single line me condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }
}
