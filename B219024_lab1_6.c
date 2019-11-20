#include <stdio.h>
int main()
{
   float l,w,ar,p;
   printf("Enter the length and width");
   scanf("%f%f",&l,&w);
   ar=l*w;
   p=2*(l+w);
   printf("The Area is %f", ar);
   printf("The Perimeter is %f", p);
   return(0);

}
