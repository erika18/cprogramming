#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char st[20][20],t[20];
   int n,i,j;
   printf("enter no.of strings:");
   scanf("%d",&n);
   printf("enter strings:");
   for(i=0;i<n;i++)
   {

       scanf("%s",st[i]);
   }
   for(i=1;i<n;i++)
   {
       for(j=1;j<=n-i;j++)
       {
           if(strcmp(st[j-1],st[j])>0)
           {
              strcpy(t,st[j-1]);
              strcpy(st[j-1],st[j]);
              strcpy(st[j],t);
           }
       }
   }
   printf("sorted list\n");
   for(i=0;i<n;i++)
   printf("%s\n",st[i]);
    return 0;
}
