#include<stdio.h>
int Linear(int B[10],int n);

int main()
{
  int A[10],x;
  int i;
  printf("\nEnter the value of the array:");
  for(i=0;i<10;i++)
     scanf("%d",&A[i]);
  printf("\nEnter the value to find in the array:");
  scanf("%d",&x);
  int y=Linear(A,x);
  if(y==-1)
    printf("\nSorry, element not found");
  else
    printf("\nElement found in the place:%d ",y+1);
  return 0;
}
int Linear(int B[10],int n)
{  int i;
  for(i=0;i<10;i++)
   if(B[i]==n)
     return i;
   return -1;
}
