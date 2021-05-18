#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0 || year%400==0 && year%100!=0)
    {
        printf("the year is lapear\n");
    }
    else
    {
        printf("the year is not leapear\n");
    }
}
