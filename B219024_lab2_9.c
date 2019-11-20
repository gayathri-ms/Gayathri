#include<stdio.h>
main()
{
 int number=0;
 int i;
 int arr[10];
 printf("Please enter the numbers");

 for (i = 0 ; i < 10; i++ )
    {
        scanf("%d",&number );
        arr[ i ] = number;
    }





 printf("YOUR NUMBERS ARE:\n");
 for(i=0;i<5;i++)
 {
     printf("%d",arr[i]);
     printf("\t");
     printf("%d",arr[9-i]);
     printf("\n");
 }





}
