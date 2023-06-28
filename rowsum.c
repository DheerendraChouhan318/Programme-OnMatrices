#include<stdio.h>
int main()
{int r,c;
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
    int sumRow=0,sumcol=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                    sumRow+=p[i][j];
            }
        printf(" sum of row %d is %d\n",i,sumRow);
        sumRow=0;
        }
    for(int j=0;j<c;j++)
        {
            for(int i=0;i<r;i++)
            {
                    sumcol+=p[i][j];
            }
        printf(" sum of col %d is %d\n",j,sumcol);
        sumcol=0;
        }
    

}
