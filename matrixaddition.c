#include<stdio.h>
int main()
{
    int m,n,a[10][10],b[10][10],sum[10][10],i,j;
    printf("Enter the numbers of row and columns\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of a 1st matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);

        }
        printf("\n\n");
    }

}
