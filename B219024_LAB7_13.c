#include<stdio.h>

int main()
{
  char word[50];
  int count=0;
  printf("\nEnter the string:");
  fgets(word,50,stdin);
  int len=strlen(word);
  for(int i=0;i<len;i++)
  {
     switch(word[i])
     {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':count++;
                break;
       }
    }
    printf("\nNumber of vowels is:%d",count);
    return 0;
}
