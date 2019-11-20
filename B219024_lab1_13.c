#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("A = %d and B = %d\n",a,b);
    a+=b;
    b=a-b;
    a-=b;
    printf("A = %d and B = %d\n",a,b);
    return(0);
}
