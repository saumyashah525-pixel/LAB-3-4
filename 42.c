#include <stdio.h>

int main() {
    int n, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<=1) {
        printf("%d is neither prime nor composite.\n", n);
    }
    for (int i = 2;i*i<= n; i++) {
        if (n%i==0) {
            is_prime=0; 
            break;
        }
    }
    if (is_prime) {
        printf("%d is a PRIME number.\n", n);
    } else {
        printf("%d is a COMPOSITE number.\n", n);
    }
    return 0;
}
