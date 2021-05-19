#include<stdio.h>
int main()
{
    int n=1,count;
    float sum=0.0,fact;
    while(n<=7)
    {
        fact=1;
        for(count=1;count<=n;count++)
        {
            fact=fact*count;
        }
        sum=sum+(n/fact);
        n++;
    }
    printf("Sum of series is %f\n",sum);
}

