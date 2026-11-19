#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        i+=1;
        printf("%d \t",i);
    }
}