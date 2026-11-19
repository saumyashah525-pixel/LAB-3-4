#include <stdio.h>

int main() {
    int n, num, max, second_max,temp;

    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter numbers:\n");
    scanf("%d %d", &max, &second_max); 
    if (second_max > max) {
        temp = max;
        max = second_max;
        second_max = temp;
    }
    for (int i = 2; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            second_max = max;
            max = num;
        } 
        
        else if (num > second_max && num != max) 
        {
            second_max = num;
        }
    }

    printf("Max: %d\nSecond Max: %d\n", max, second_max);
    return 0;
}
