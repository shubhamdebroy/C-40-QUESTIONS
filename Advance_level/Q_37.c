#include <stdio.h>

struct Student {
    char name;
    int rollNumber;
    float marks;
};

int main() {
    struct Student student;

    // Input student information
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Display the student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}   