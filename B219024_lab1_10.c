#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number between 0 and 32767\n");
    scanf("%d",&n);
    if(n>=0&&n<=32767)
    {
    	int rev=0,m=n,k=0,i,z,j,v=1;
    	while(m>0)
    	{
    		rev=rev*10+m%10;
    		m/=10;
    		k++;
    	}
    	for(i=k;i>0;i--)
    	{
    		z=rev;
    		z/=v;
    		for(j=1;j<=i;j++)
    		{
    			printf("%d   ",z%10);
    			z/=10;
    		}
    		printf("\n");
    		v*=10;
    	}
    }
    else
    {
    	printf("Enter a Number within the valid range");
    }
    return(0);
}

