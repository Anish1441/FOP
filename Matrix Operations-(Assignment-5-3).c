#include <stdio.h>

int main() {
    int a[2][2];
    float det;

    printf("Enter 2x2 matrix:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0){
        printf("Inverse not possible\n");
    } else {
        printf("Inverse matrix:\n");
        printf("%f %f\n", a[1][1]/det, -a[0][1]/det);
        printf("%f %f\n", -a[1][0]/det, a[0][0]/det);
    }

    return 0;
}