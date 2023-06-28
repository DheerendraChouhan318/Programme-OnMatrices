#include<stdio.h>
int main()
{
    int r,c;
    printf("enter row and columns");
    scanf("%d %d",&r,&c);
    int p[r][c];
    printf("Enter elements of arry");
    for(int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&p[i][j]);

        }
    } 
    int small=p[0][0],large=[0][0];
    for(int i=0;i<r;i++)
    {
        for (int j=0;i<c;j++)
        {
            if(small<p[i][j]);
            small=p[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for (int j=0;i<c;j++)
        {
            if(large>p[i][j]);
            large=p[i][j];
        }
    }
    printf("Smallest element is %d and largest element is %d",small,large);
    }