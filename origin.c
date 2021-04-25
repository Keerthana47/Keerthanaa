#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the point(x,y)\n");
    scanf("%f%f",&x,&y);
    if(x==0 && y==0)
    {
        printf("point lies on the origin\n");
    }
    else if(x==0)
    {
        printf("point lies on the y-axis\n");
    }
    else if(y==0)    
    {
        printf("point lies on the x-axis\n"); 
    } 
    else
    {
        printf("point neither lies on x-axis nor on y-axis\n");
    } 
} 
    
    

