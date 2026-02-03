#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("%d == %d is %d (Equal)\n", a, b, a == b);
    printf("%d != %d is %d (Not Equal)\n", a, b, a != b);
    printf("%d > %d  is %d (Greater Than)\n", a, b, a > b);
    printf("%d < %d  is %d (Less Than)\n", a, b, a < b);
    printf("%d >= %d is %d (Greater or Equal)\n", a, b, a >= b);
    printf("%d <= %d is %d (Less or Equal)\n", a, b, a <= b);

    return 0;
}