#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int r,n=0,i,j,temp;
   char str[20],rev[20];
   printf("enter the string\n");
   gets(str);
   for(i=0;str[i]!='\0';i++)
   rev[i]=str[i];

   rev[i]='\0';
   n=strlen(rev);
   i=0;
   j=n-1;
   while(i<j)
   {
    temp=rev[i];
    rev[i]=rev[j];
    rev[j]=temp;
    i++;
    j--;
   }
   r=strcmp(str,rev);
   if(r==0)
   printf("entered string is a pallindrome");
   else
   printf("not pallindrome");
    return 0;
}
