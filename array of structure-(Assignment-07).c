// Array of Structures 

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
}; 

int main() {
    struct Student students[3]; // Array of 3 Student structures
    for (int i = 0; i < 3; i++) {
        printf("Enter name, age, and grade for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].grade);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Grade: %.2f\n", students[i].name, students[i].age, students[i].grade);
    }

    return 0;
}