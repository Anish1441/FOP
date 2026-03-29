//Write a program in C to perform basic operations such as addition, saddle point, inverse, magic square of two matrices.

#include <stdio.h>
int main() {
    int a[3][3], b[3][3], sum[3][3], i, j, m, n;
    
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Addition of two matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Sum of the two matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;



   
}


