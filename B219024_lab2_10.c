
#include<stdio.h>
main()
{
 int number=0;
 int i;
 int arr[10];
 printf("Please enter the numbers");

 for (i = 0 ; i < 9; i++ )
    {
        scanf("%d",&number );
        arr[ i ] = number;
    }





 printf("YOUR NUMBERS ARE:\n");
 for(i=0;i<9;i+3)
 {
     printf("%d",arr[i]);
     printf(",");
     printf("%d",arr[i+1]);
     printf(",");
     printf("%d",arr[i+2]);
     printf("\n");
 }





}
