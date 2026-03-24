#include <stdio.h>

int fact(int n) {
    int f = 1, i;
    for(i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int power(int x, int y) {
    int p = 1, i;
    for(i = 1; i <= y; i++)
        p = p * x;
    return p;
}

int main() {
    int choice, x, y;

    scanf("%d", &choice);

    switch(choice) {
        case 1: // Addition
            scanf("%d %d", &x, &y);
            printf("%d", x + y);
            break;

        case 2: // Subtraction
            scanf("%d %d", &x, &y);
            printf("%d", x - y);
            break;

        case 3: // Multiplication
            scanf("%d %d", &x, &y);
            printf("%d", x * y);
            break;

        case 4: // Division
            scanf("%d %d", &x, &y);
            printf("%d", x / y);
            break;

        case 5: // Power
            scanf("%d %d", &x, &y);
            printf("%d", power(x, y));
            break;

        case 6: // Factorial
            scanf("%d", &x);
            printf("%d", fact(x));
            break;
    }

    return 0;
}