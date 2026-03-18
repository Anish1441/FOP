#include <stdio.h>

int fibonachi(int n){
    if (n<=1)
        return n;
    return fibonachi(n-1)+ fibonachi(n-2);
    
}

int main(){
    int i, num;
    printf("Emter the number:");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++){
        printf("%d\n",fibonachi(i));
    }
    return 0;
}