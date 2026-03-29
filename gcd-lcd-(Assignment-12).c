#include <stdio.h>

int main() {
    int a, b, i;
    int gcd = 1;
    int smallestDiv = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;

    // 🔹 GCD
    for(i = 1; i <= min; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d\n", gcd);

    // 🔹 Smallest Common Divisor (>1)
    for(i = 2; i <= min; i++) {
        if(a % i == 0 && b % i == 0) {
            smallestDiv = i;
            break;
        }
    }

    if(smallestDiv != 0)
        printf("Smallest Common Divisor(excl. 1)= %d\n", smallestDiv);
    else
        printf("No Common Divisor other than 1\n");

    return 0;
}