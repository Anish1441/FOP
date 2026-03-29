#include <stdio.h>

int main() {
    int a[3][3], i, j, k;
    int found = 0;

    printf("Enter 3x3 Matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++){
        int min = a[i][0], col = 0;

        // find minimum in row
        for(j=1;j<3;j++){
            if(a[i][j] < min){
                min = a[i][j];
                col = j;
            }
        }

        // check if it is maximum in column
        int isSaddle = 1;
        for(k=0;k<3;k++){
            if(a[k][col] > min){
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle){
            printf("Saddle Point: %d at (%d,%d)\n", min, i, col);
            found = 1;
        }
    }

    if(!found)
        printf("No Saddle Point\n");

    return 0;
}
