#include <stdio.h>
#include <math.h>

// factorial function
int fact(int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    int n, i, sign = 1;
    float x, sum = 0;

    printf("Enter x (in radians) and terms: ");
    scanf("%f %d", &x, &n);

    for(i = 1; i <= (2*n-1); i += 2)
    {
        sum += sign * (pow(x, i) / fact(i));
        sign = -sign;
    }

    printf("Sum = %.4f", sum);

    return 0;
}