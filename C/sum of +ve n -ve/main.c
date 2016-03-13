#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],sp=0,sn=0,n,i;
    float s=0;
   printf("enter the number of terms\n");
   scanf("%d",&n);
   printf("\n");

   for(i=0;i<n;i++)
   {
     printf("enter a number into the array\n");
     scanf("%d",&a[i]);


   }

   for(i=0;i<n;i++)
   {
     if(a[i]>0)
     {
       sp=sp+a[i];
     }

     if(a[i]<0)
     {
       sn=sn+a[i];
     }

     s=s+a[i];

   }



   printf("%d is the sum of +ve integers\n ",sp);
   printf("%d is the sum of -ve integers\n ",sn);
   printf("%f is the avg of all the numbers in the array",s/n);
    return 0;
}
