#include <stdio.h>

int main()
{
    int n, i, num;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    scanf("%d", &num);
    max = min = num;

    for(i = 1; i < n; i++)
    {
        scanf("%d", &num);
        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }
    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

}
