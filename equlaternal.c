/*
* c program to find area of equilaternal triangle
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float side,area;
    printf("Enter the side of equilaternal triangle: ");
    scanf("%f",&side);
    area=(sqrt(3/4)*(side*side));
    printf("area of equilaternal trianfgle=%0.2f",side);
    
}
