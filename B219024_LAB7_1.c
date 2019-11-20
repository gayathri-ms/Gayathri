#include<stdio.h>


int main()
{
  int n;
  int x,i,j;
  printf("\nEnter the size of the square matrix:");
  scanf("%d",&n);
  int A[n][n];
  int B[n][n];
  printf("\nEnter the values of the matrix");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
       scanf("%d",&A[i][j]);
  printf("\nThe given matrix is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
       printf("%d ",A[i][j]);
    printf("\n");
  }
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
      B[j][i]=A[i][j];
    }
  printf("\nTranspose of the given square matrix is:\n");
  for(i=0;i<n;i++)
  { for(j=0;j<n;j++)
       printf("%d ",B[i][j]);
    printf("\n");
  }
  return 0;
}
