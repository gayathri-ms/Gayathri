#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){

    int len;
    char string[50];
    printf("\nEnter the string:");
    fgets(string,50,stdin);
    len=strlen(string);
    //printf("length%d",len);
    for(int i=0;i<=len;i++)
    {
    //  printf("\n%c",string[i]);
      if((string[i]>='a')&&(string[i]<='z'))
         string[i]=string[i]-32;
    }
    printf("\nThe string is:%s",string);
    return 0;
}
