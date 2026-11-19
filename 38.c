#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter Your N: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        a=i*i;
        printf("%d ,",a);
    }
}