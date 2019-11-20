#include<stdio.h>
int main()
{
    char ch;
    int h1,m1,h2,m2;
    printf("Type of vehicle?- C for car, B for bus, T for truck");
    scanf("%s",&ch);
    printf("Hour vehicle entered the lot (0 - 24)? ");
    scanf("%d",&h1);
    printf("Minute vehicle entered the lot (0 - 60)? ");
    scanf("%d",&m1);
    printf("Hour vehicle left the lot (0 - 24)? ");
    scanf("%d",&h2);
    printf("Minute vehicle left the lot (0 - 60)?");
    scanf("%d",&m2);
    int hrs=abs(h2-h1);
    int min=abs(m2-m1);
    int tot= hrs*60+min;
    double x=tot/60;
    double charge=0.0;
    if(ch=='C')
    {
      if(x>3)
         charge=(1.5*(x-3));
    }
    else if(ch=='T')
    {
        charge=1*x;
        if(x>2)
        charge+=2.3*(x-2);
    }
    else if(ch=='B')
    {
        charge=2*x;
        if(x>1)
        charge+=3.7*(x-1);
    }
    printf("\t\tPARKING LOT CHARGE\n");
    printf("Type of vehicle: %c\n",ch);
    printf("TIME-IN:\t %d:%d\n",h1,m1);
    printf("TIME-OUT:\t %d:%d\n",h2,m2);
    printf("\t\t-----------\n");
    printf("PARKING TIME : %d:%d\n",hrs,min);
    printf("ROUNDED TOTAL: %d\n",tot);
    printf("\t\t-----------\n");
    printf("TOTAL CHARGE:\t $ %f\n",charge);
    return 0;
}






