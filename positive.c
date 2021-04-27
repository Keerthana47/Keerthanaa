/*
* c program to check the given numbers is positive or negative
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is a positive number\n",n);
    }
    else if(n<0)
    {
        printf("%d is a negative number\n",n);
    }
    else
    {
        printf("0 is neither positive nor negative number");
    }
}
