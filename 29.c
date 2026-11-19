#include<stdio.h>
int main()
{
    int n,i,sum=0,a,b;
    printf("Enter number :");
    scanf("%d",&n);

    a=n;
    while(n!=0)
    {
        b=n%10;
        sum=sum*10+b;
        n=n/10;
        i++;
    }

    if(a==sum)
    printf("Pallindrom");
    else
    printf("Not Pallindrom");
}