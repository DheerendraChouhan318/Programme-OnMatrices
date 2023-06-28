#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the order of matrix");
    scanf("%dx%d",&m,&n);
    int a[m][n],b[m][n];
    printf("enter the elements of matrix");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("transpose of matrix is\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }printf("\n");
    }

}