#include<stdio.h>
int main()
{
    float marks1,marks2,marks3,average;
    printf("Enter marks obtained subjects 1:");
    scanf("%f",&marks1);
    printf("Enter marks obtained subjects 2:");
    scanf("%f",&marks2);
    printf("Enter marks obtained subjects 3:");
    scanf("%f",&marks3);
    average=(marks1+marks2+marks3)/3;
    printf("Average :%0.2f\n",average);
    if( average >= 90)
    {
        printf("Grade A");
    }
    else if( average >= 80)
    {
        printf("Grade B");
    }
    else if( average >= 70)
    {
        printf("Grade c");
    }
    else if( average >=60)
    {
        printf("Grade D");
    }
    else 
    {
        printf("Grade f");
    }
}
