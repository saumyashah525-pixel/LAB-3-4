#include<stdio.h>
int main()
{
    int n,a,b=0;
    printf("Enter number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=n%i;
        if(a==0)
        {
            printf("%d,",i);
        }
        if(a!=0)
        {
            continue;
        }
    }
}