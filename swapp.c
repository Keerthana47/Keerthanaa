
#include<stdio.h>
void main()
{
    int a,b,t;
    printf("Enter the two integers\n: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping\nfirst integer = %d\nsecond integer = %d\n",a,b);
    t = a;
    a = b;
    b = t;
    printf("After swapping\nfirst integer = %d\nsecond integer = %d\n",a,b);
}
