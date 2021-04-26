/**
* c program to print natural numbers in range
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the any number:");
    scanf("%d",&n);
    printf("Natural numbers from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    printf("\n\n");

}
