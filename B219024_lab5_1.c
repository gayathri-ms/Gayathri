#include<stdio.h>
int main()
{
    int d,m,y,day,x;
    printf("Enter the DOB in the format of DD/MM/YYYY");
    scanf("%d/%d/%d",&d,&m,&y);
    day = ((y-1)*365 + (y-1)/4 - (y-1)/100 + (y-1)/400)%7;
    switch(m)
    {
        case 1:
           x=0;
           break;
        case 2:
           x=31;
           break;
        case 3:
           x=31+28;
           break;
        case 4:
           x=31+28+31;
           break;
        case 5:
           x=31+28+31+30;
           break;
        case 6:
           x=31+28+31+30+31;
           break;
        case 7:
           x=31+28+31+30+31+30;
           break;
        case 8:
           x=31+28+31+30+31+30+31;
           break;
        case 9:
           x=31+28+31+30+31+30+31+31;
           break;
        case 10:
           x=31+28+31+30+31+30+31+31+30;
           break;
        case 11:
           x=31+28+31+30+31+30+31+31+30+31;
           break;
        case 12:
           x=31+28+31+30+31+30+31+31+30+31+30;
           break;
        default:
            printf("Error");
            x=-1;
            break;
    }
    x+=day+d;
    if(((y%4)&&!(y%100)||(y%400))&&m>=3)
        x+=1;
    x%=7;
    switch(x)
    {
        case 0:
           printf("%d/%d/%d is Sunday",d,m,y);
           break;
        case 1:
           printf("%d/%d/%d is Monday",d,m,y);
           break;
        case 2:
           printf("%d/%d/%d is Tuesday",d,m,y);
           break;
        case 3:
           printf("%d/%d/%d is Wednesday",d,m,y);
           break;
        case 4:
           printf("%d/%d/%d is Thursday",d,m,y);
           break;
        case 5:
           printf("%d/%d/%d is Friday",d,m,y);
           break;
        case 6:
           printf("%d/%d/%d is Saturday",d,m,y);
           break;
        default:
           printf("Error");
           break;
    }
    return(0);
}
