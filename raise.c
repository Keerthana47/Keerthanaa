#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,s,x;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    s=1;
    x=b;
    while(b!=0)
    {
        s=s*a;
        b=b-1;
    }
    printf("\%d raised to the power is %d=%d\n",a,x,s);
}

    
