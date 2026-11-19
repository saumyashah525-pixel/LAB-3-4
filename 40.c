#include<stdio.h>
int main()
{
    int n,sum=0;
    
    for(int i=0;;i++)
    {
        printf("Enter Number");
        scanf("%d",&n);
        if(n>0)
            sum=sum+n;
        if(n<0)
        {
        printf("You Enter Negative value \n");
        break;
        }
    }
    printf("Your Positive Numbers Sum is %d",sum);

}