#include <stdio.h>

int main() {
    int sales, commission = 0;
    printf("Enter the sales amount (Rs.): ");
    scanf("%d",&sales);
    if (sales <= 500) {
        commission = sales * 0.05;
    } 
    else if (sales <= 2000) {
        commission = 35.0 + ((sales - 500) * 0.10);
    } 
    else if (sales <= 5000) {
        commission = 185.0 + ((sales - 2000) * 0.12);
    } 
    else {
        commission = sales * 0.125;
    }
    printf("Calculated Commission: Rs. %d \n", commission);
}
