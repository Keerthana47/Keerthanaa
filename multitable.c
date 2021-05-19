#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=20;i++)
    {
        printf("%d*%d=%d\n",i,n,n*i);
    }
}
    
