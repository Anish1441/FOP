#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    // Only ask for numbers if a valid menu option is chosen
    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers : ");
        scanf("%f %f", &a, &b);
    }

    switch (choice) {
        case 1:
            result = a + b;
            printf("Addition = %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Subtraction = %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Multiplication = %.2f\n", result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Division = %.2f\n", result);
            } else {
                printf("Error: Division by zero not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
