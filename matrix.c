#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j;
    printf("Enter the order of a matrix:");
    scanf("%d%d",&m,&n);
    if(m<10 && n<=10)
    {
        printf("Enter the matrix:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
            for(i=0;i<n;i++)
            {
                for(j=0;i<n;i++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
    }
    else
    {
        printf("please enter order less than or equal to 10*10");
    }
    printf("\n");
}
