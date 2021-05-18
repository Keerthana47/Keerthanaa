#include<stdio.h>   
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("enter 2 words: ");
    scanf("%s%s",a,b);
    strcat(a,b);
    printf("%s\n",a);
    printf("%s\n",b);
    printf("\n\n");
}
    
