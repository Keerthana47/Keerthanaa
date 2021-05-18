#include<stdio.h>
int main()
{
    float h,w,bmi;
    printf("Enter the height");
    scanf("%f",&h);
    printf("Enter the weight");
    scanf("%f",&w);
    bmi=w/(h*h);
    printf("the body mass index %f\n",bmi);
    if(bmi >=15.1 && bmi<=17.5)
    {
        printf("your bmi category is:Anorexic\n");
    }
    else if(bmi>=18.6 && bmi<=24.9)
    {
         printf("your bmi category is:ideal\n");
    }
    else if(bmi>=25 && bmi<=25.9)
    {
        printf("your bmi category is:overweight\n");
    }
    else if(bmi>=30 && bmi<=30.9)
    {
        printf("your bmi category is:obese\n");
    }
    else if(bmi>=40)
    {
         printf("your bmi category is: mordly obese\n");
    }
    else
    {
        printf("Wrong entry\n");
    }
}
    
    
    
