#include<stdio.h>
#include<conio.h>
int main()
{
   int count=0,i;
   char strings[100],ch;
   printf("\nEnter the string:");
   scanf("%s",strings);
   printf("\nEnter the character to be searched:");
   ch=getch();
   for(i=0;strings[i]<"\0";i++)
   {
      if(strings[i]==ch)
        count++;
   }
   printf("\nNumber of occurences of %c is:%3d",ch,count);
   return 0;
}
