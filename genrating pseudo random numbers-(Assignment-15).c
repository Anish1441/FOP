//generate number of  random number 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, n;
    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);
    
    // Seed the random number generator     
    srand(time(0));

    printf("Generated random numbers:\n");
    for(i = 0; i < n; i++){
        int random_number = rand();
        printf("%d ", random_number);
    }
    return 0;
}