#include<stdio.h>
int main()
{
    int i,n,a,b,sum=0;
    printf("Enter Number");
    scanf("%d",&n);
    a=n;
    while (n!=0)
    {
        b=n%10;
        sum=sum+b;
        n=n/10;

        i++;
    }
    printf("%d",sum);
    
}