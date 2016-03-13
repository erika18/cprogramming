#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n=0,i,j,temp;
   char str[20],rev[20];
   printf("enter the string\n");
   gets(str);
   for(i=0;str[i]!='\0';i++)
   rev[i]=str[i];

   rev[i]='\0';
   for(i=0;str[i]!='\0';i++)
   {
       n=n+1;
   }
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
   printf("the string before reversing is %s\n",str);
   printf("the string after reversing is %s",rev);
   return 0;
}
