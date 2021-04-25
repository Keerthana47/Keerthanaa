#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sp,area;
    printf("Enter the values of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    sp = (a+b+c)/2.0;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("area of a triangle %f\n" ,area);
}

