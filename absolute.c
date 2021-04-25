#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter a positive or negative number\n");
    scanf("%d",&n);
    printf("Absolute value of |%d| is %d\n",n,abs(n));
}
