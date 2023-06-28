#include<Stdio.h>
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
    int temp;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for (int k=0;k<c-j-1;k++){
            if(p[i][k]>p[i][k+1])
            {
                temp=p[i][k];
                p[i][k]=p[i][k+1];
                p[i][k+1]=temp;
            }
        }
        }
    }
    for(int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d ",p[i][j]);
        }   
        printf("\n");
     }
}