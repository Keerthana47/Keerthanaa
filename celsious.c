// c program to convert farenhit to celsious
#include<stdio.h>
int main()
{
    float celsious,farenhit;
    printf("Enter the temperature in farenhit: ");
    scanf("%f",&farenhit);
    celsious=(farenhit-32)*5/9;
    printf("%0.2ffarenhit = %0.2fcelsious",farenhit,celsious );
}
