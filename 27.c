#include<stdio.h>
int main ()
{
    int n,i,a=0;
    printf("Enter any number :");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
        }
    }
    if (a==0 && n!=1)
    {
       printf("Enter number is prime");
    }
    else if(n==1)
    
    {
       printf("Enter number neither prime nor composite ");
    }
    else{
        printf("enter number is not prime");
    }
   
}