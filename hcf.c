/**
* c program to find HCF of two numbers
*/
#include<stdio.h>
int main()
{
    int n1,i,n2,min,hcf=1;
    printf("Enter the two numbers to find hcf: ");
    scanf("%d%d",&n1,&n2);
    min=(n1<n2) ? n1:n2;
    for(i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    printf("hcf of %d and %d = %d\n",n1,n2,hcf);
}
