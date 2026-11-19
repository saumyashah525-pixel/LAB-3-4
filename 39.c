#include <stdio.h>

int main() {
    int n,sum=0,fact=1;

    printf("Enter the value of N: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        fact *= i;             
        sum += i / fact; 
    }

    printf("Sum of the series up to %d terms: %d \n", n, sum);
}
