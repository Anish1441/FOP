#include <stdio.h>
#include <stdlib.h>

void add() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a + b);
}


void subtract() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a - b);
}

void multiplication() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a * b);
}

void divide() {
    int a, b;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Result: %d\n", a / b);
    } 
    else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void factorial() {
    int n, i;
    int fact = 1; 
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: Factorial not defined for negative numbers.\n");
    } 
    
    else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Factorial: %d\n", fact);
    }
}

int main() {
    int choice;
    while (1) 
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            add();
        } else if (choice == 2) {
            subtract();
        } else if (choice == 3) {
            Multiplication();
        } else if (choice == 4) {
            divide();
        } else if (choice == 5) {
            factorial();
        } else if (choice == 6) {
            exit(0);
        } else {
            printf("Invalid selection!\n");
        }
    }
    return 0;
}