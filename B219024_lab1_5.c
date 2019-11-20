#include <stdio.h>
int main()
{
   int r;
   float n;
   printf("Enter a number");
   scanf("%f",&n);
   r=(int)n%100;
   r/=10;
   printf("The Second Rightmost Digit of %f is %d", n, r);
   return(0);

}
