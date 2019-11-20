#include <stdio.h>
int main()
{
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   printf("The Rightmost Digit of %d is %d", n, n%10);
   return(0);

}
