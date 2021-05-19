#include<stdio.h>
int main()
{
    int pop=100000,i;
    for(i=1;i<=10;i++)
    {
        pop=pop-pop*0.1;
        printf("%d year=%d\n",i,(int)pop);
    }
}
    
