#include<stdio.h>
int main()
{
  int m,n;
  printf("Enter the order of matrix\t");
  scanf("%d %d",&m,&n);
  int a[m][n];
  printf("enter the elements of array");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
    }
  }
  int sum=0;
  for (int i=0;i<m;++i)
  {
    for(int j=0;j<n;++j)
    {    
    sum+=a[i][j];

    }
  }
  
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
    printf("%d ",a[i][j]);
    }
    printf("\n");
  } 
  printf("\n Sum of elements of following array is %d",sum);
}