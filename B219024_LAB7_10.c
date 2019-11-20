#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,len,len1=0;
    char word[50];
    printf("\nEnter the string:");
    fgets(word,50,stdin);
    //printf("\nword:%s",word);
    len=strlen(word);
    //printf("\nLENGTH:%d",len);
    for(int i=0;i<=len;i++)
    {//printf("%c,count:%d\n",word[i],count);
      if((word[i]==',')||(word[i]==' ')||(word[i]=='.')||(word[i]=='!'))
        {  count++;

        for(int j=len1;j<=i;j++)
           printf("%c",word[j]);
        printf("\n");
        len1=i+1;
        }
    }
    printf("\nThe number of words in the given string is:%d",count);
    return 0;
}


