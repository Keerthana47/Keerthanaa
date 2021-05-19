#include<stdio.h>
#include<math.h>
int main()
{
    int n,count,i,prime;    
    printf("prime numbers from 1 to 300 are\n");
    for(n=1;n<=300;n++)
    {
        if(n==1)
        {
            printf("number 1 is neither prime or composite");
            continue;
        }
        count=sqrt(n);
        prime=1;
        for(i=2;i<=count;i++)
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
            
       }
       if(prime)
        {
            printf("%d\n",n);
        }
    }
}       
