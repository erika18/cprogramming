#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,n,flag=0,small;
   int data[100];
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        {
            printf("data[%d]= ",i);
            scanf("%d",&data[i]);
        }
        small=data[0];
         for(i=1;i<n;i++)
         {
             if(data[i]<small)
                small=data[i];
         }
          for(i=small;i>0;i--)
          {
               for(j=0;j<n;j++)
               {
                   if(data[j]%i!=0)
                    flag=1;
               }
               if(flag==0)
               {
                   printf("GCD of %d numbers is %d\n",n,i);
                   break;
               }
               flag=0;
          }
        return 0;
}
