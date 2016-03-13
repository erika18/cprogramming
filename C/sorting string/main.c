#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
  char st[20],t;
  int i,j;
  printf("enter the string:");
  gets(st);
  for(i=1;st[i]!='\0';i++)
  {
      for(j=0;st[j-1]!='\0';j++)
       {
           if(toascii(st[i])<toascii(st[j]))
           {
               t=st[j];
               st[j]=st[i];
               st[i]=t;
           }
       }
  }
  printf("sorted array\n");
  puts(st);
  return 0;
}

