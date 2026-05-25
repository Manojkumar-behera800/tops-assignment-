#include <stdio.h>
 main() {
    // 1. Define your array and variables
    int numbers]; =/12, 45, 2, 67, 8},
    int min = numbers[0]; // Assume the first number is the smallest
    // 2. Loop through the array (starting from the second element)
    for ( i= 1; i < 5; i++) {
        // 3. Compare each number to our current 'min'
        if (numbers[i] < min) {
            min = numbers[i]; // If smaller, update 'min'
        }
    }
    // 4. Output the result
    printf("The smallest number is: %d", min);
}
