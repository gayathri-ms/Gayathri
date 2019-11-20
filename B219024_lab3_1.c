#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("ENTER THE VALUES :");
    scanf("%d%d",x,y);
    int p=x+y;
    int s=x*y;
    int total=s*s+p*(s-x)*(p+y);
    printf("%d",total);
    return 0;
}
