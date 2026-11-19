#include<stdio.h>
int main()
{
    int n,i,sum=0,a,b;
    printf("Enter number");
    scanf("%d",&n);

    b=n;
    while(n!=0)
    {
        a=n%10;
        sum=sum+a*a*a;
        n=n/10;
        i++;
    }
    if(b==sum)
    printf("num is armstrong");
    else
    printf("not armstrong");
}