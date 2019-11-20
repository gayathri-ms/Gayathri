#include<stdio.h>
int main()
{
   int x[5],y;
   int small,i,large,sum,avg;
   printf("\nEnter any 5 numbers:");
   for(int i=0;i<5;i++)
   {  scanf("%d",&x[i]);}
   printf("\nChoose which you want to find:\n1-smallest\n2-largest\n3-sum\n4-average\n");
   scanf("%d",&y);
   switch(y)
   {
      case 1:
              small=x[0];
              for(i=1;i<5;i++)
              {
                if(small>x[i])
                  small=x[i];
              }
              printf("\nSmallest among the given numbers is:%d",small);

              break;
     case 2:
              large=x[0];
              for(i=1;i<5;i++)
              {
                if(large<x[i])
                  large=x[i];
              }
              printf("\nLargest among the given numbers is:%d",large);
              break;
     case 3:
              sum=0;
              for(i=0;i<5;i++)
              {   sum+=x[i];}
              printf("\nSum of the given numbers is:",sum);
              break;
     case 4:
              sum=0;
              for(i=0;i<5;i++)
              {   sum+=x[i];}
              avg=sum/i;
              printf("\nAverage of the given numbers:%d",avg);
              break;
        default:printf("\nError!!Invalid choice.");
        }
    return 0;
}
