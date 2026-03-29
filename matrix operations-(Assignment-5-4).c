#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int sum, magic = 1;

    printf("Enter 3x3 Matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    // sum of first row
    int s = 0;
    for(j=0;j<3;j++)
        s += a[0][j];

    // check rows
    for(i=0;i<3;i++){
        sum = 0;
        for(j=0;j<3;j++)
            sum += a[i][j];
        if(sum != s)
            magic = 0;
    }

    // check columns
    for(j=0;j<3;j++){
        sum = 0;
        for(i=0;i<3;i++)
            sum += a[i][j];
        if(sum != s)
            magic = 0;
    }

    // diagonals
    int d1 = 0, d2 = 0;
    for(i=0;i<3;i++){
        d1 += a[i][i];
        d2 += a[i][2-i];
    }

    if(d1 != s || d2 != s)
        magic = 0;

    if(magic)
        printf("Magic Square\n");
    else
        printf("Not Magic Square\n");

    return 0;
}