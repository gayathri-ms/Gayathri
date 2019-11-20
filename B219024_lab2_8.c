#include<stdio.h>
main()
{
 int a=0,b=0,c=0;
 int i;
 printf("Please enter the numbers");
 scanf("%d%d%d",&a,&b,&c);
 int arr[3]={15,32,75};
 printf("THE NUMBERS FORWARD\n");
 for(i=0;i<3;i++)
 {
     printf("%d",arr[i]);
     printf("\n");
 }

 printf("\nTHE NUMBERS BACKWARD\ny");
 for(i=2;i>=0;i--)
 {
     printf("%d",arr[i]);
     printf("\n");
 }




}
