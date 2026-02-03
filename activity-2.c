#include <stdio.h>

int main() {
    int age;
    int has_id; 

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have an ID? (1 for Yes, 0 for No): ");
    scanf("%d", &has_id);
    if (age >= 18 && has_id == 1) {
        printf("You can enter the club.\n");
    }

    // Logical OR (||): **True if AT LEAST ONE is true
    else if (age >= 18 || has_id == 1) {
        printf("You are allowed in the waiting area.\n");
    }
    // Logical NOT (!):** Reverses the value
    else{
        printf("You do not have an ID.\n");
    }
    return 0;
}
