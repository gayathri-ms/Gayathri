#include<stdio.h>
int main()
{
    int fib1,fib2=0,fib3=1;
    for(fib1=0;fib1<=89;fib1=fib2+fib3)
    {
        printf("%d ",fib1);
        fib2=fib3;
        fib3=fib1;

    }
     return(0);
}
