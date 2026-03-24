// reversing given number 

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while (num != 0) {
        remainder = num % 10; // last digit
        reversed = reversed * 10 + remainder; // Appending it to the reversed number
        num /= 10; // Removing the last digit
    }

    printf("Reversed number: %d\n", reversed);
    
    return 0;
}