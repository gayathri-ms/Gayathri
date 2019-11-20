#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char word1[10],word2[10];
   printf("\nEnter the word: ");
   fgets(word1,10,stdin);
   int len=strlen(word1);
   int j,i=0;
   for(j=len-1;i<=len-1,j>=0;i++,j--)
   {
       word2[i]=word1[j];
   }
      if(strcmp(word1,word2)==0)
        printf("\nThe given string is palindrome!!!...");
      else
        {
          printf("\nThis is not palindrome.");
          exit(0);
        }


    return 0;
}
