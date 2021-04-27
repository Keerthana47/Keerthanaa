#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,a[10][10],b[10][10],sum[10][10],i,j;
    printf("Enter the numbers of row and columns\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of a 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<0;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<0;i++)
    {
        for(j=0;j<0;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the resultant matrix formed on adding the matrix\n");
    for(i=0;i<0;i++)
    {
        for(j=0;j<0;j++)
        {
            printf("%d\t",sum[i][j]);

        }
        printf("\n\n");
    }

}
