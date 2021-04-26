/*
* c program to check whether the a given number is perfect or not
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0,rem;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=(n-1);i++)
    {
        rem=n%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("Entered number is perfect number ");
    }
    else
    {
        printf("Entered numbered is not perfect number");
    }
}

