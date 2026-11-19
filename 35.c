#include <stdio.h>
int main()
{
    int n, digit, sum = 0,A,B=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n=n/10;
    } 
    while (sum>0)
    {
        A=sum%10;
        B=B+A;
        sum=sum/10;
    }
    printf("Your sum is %d",B);
}