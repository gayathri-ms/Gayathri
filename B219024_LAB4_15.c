#include<stdio.h>
int main()
{  int i,j,k,l,a;
   for(i=5;i>0;i--)
   {
      for(j=i;j>0;j--)
      {
             printf("@\t");
      }
        for(l=1;l<a;l++)
          {
              printf("\t");
          }
      a=a+2;
      for(k=i;k>0;k--)
      {
          if(k==5);
          else
            printf("@\t");
      }
      printf("\n");
   }
   int b=5;
   for(i=1;i<5;i++)
   {  for(j=0;j<i+1;j++)
      {  printf("@\t");}
      for(l=b;l>0;l--)
      {  printf("\t");}
      b=b-2;
      for(k=0;k<i+1;k++)
      {  if(k==4);
         else
          printf("@\t");}
      printf("\n");
   }
   return 0;
}
