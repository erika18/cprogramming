#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10],i,n,b[10],j=0;
   printf("enter no of elements");
   scanf("%d",&n);
   printf("enter the array elements");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("array before reversing ");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   for(i=n-1;i>=0;i--)
   {
       b[j]=a[i];
j++;
   }


   printf("\narray after reversing  ");
   for(j=0;j<n;j++)
   printf("%d\t",b[j]);
}
