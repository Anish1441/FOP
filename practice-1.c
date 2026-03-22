// PROGRAM TO FIND THE NTH TERM OF ARITHMETIC PROGRESSION AND SUM OF NTH TERMS 

#include <stdio.h>

int main() {
    int a, d, n, sum;
    

    printf("Enter the first term (a): ");
    scanf("%d", &a);
    
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    
    printf("Enter the term number (n): ");
    scanf("%d", &n);
    
    int nth_term = a + (n - 1) * d;
    int sum_n_terms = (a + nth_term) * n / 2; 
    
    printf("The %dth term of the arithmetic progression is: %d\n", n, nth_term);
    printf("The sum of the first %d terms of the arithmetic progression is: %d\n", n, sum_n_terms);

    return 0;
}