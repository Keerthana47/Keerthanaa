#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("Enter the value b: ");
    scanf("%d",&b);
    printf("Enter the value c: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is a big value.");
        }
        else
        {
            printf("c is a big value.");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is a big value.");
        }
        else
        {
            printf("c is a big value.");
        }
    }
}
