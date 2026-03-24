#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int fact = 1, isPrime = 1;

    scanf("%d", &n);

    // Square
    printf("Square: %d\n", n * n);

    // Cube
    printf("Cube: %d\n", n * n * n);

    // Square Root
    printf("Square Root: %.2f\n", sqrt(n));

    // Prime Check
    if(n <= 1)
        isPrime = 0;
    else {
        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    // Factorial
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial: %d\n", fact);

    // Prime Factors
    printf("Prime Factors: ");
    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    return 0;
}