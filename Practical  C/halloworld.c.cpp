#include <stdio.h>

// Defining the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3]; // Array of structures for 3 students
    int i;

    // Input details for 3 students
    for(i = 0; i < 3; i++) {
        printf("Enter Details for Student %d (Name, Roll, Marks): ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Displaying the details
    printf("\n--- Student Records ---\n");
    for(i = 0; i < 3; i++) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
