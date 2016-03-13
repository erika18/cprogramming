#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n1,n2,i,j,count=0,flag;
    printf("enter a positive integer for starting value of the range\n");
    scanf("%d",&n1);
    printf("enter a positive integer for ending value of the range\n");
    scanf("%d",&n2);
    printf("\n");
   if(n1>n2||n1<0)
        printf("invalid range!!! please enter a valid range\n");
    else
  {

       for(i=n1;i<=n2;i++)
    {
        if(i==0||i==1)
            flag=1;
        else
            flag=0;

        for(j=2;j<=sqrt(i);j++)
        {

          if(i%j==0)
           {
             flag=1;
           }
        }
       if(flag==0)
        {
             printf("%d\t",i);
             count=count+1;
        }
    }
   if(count==0)
   {
       printf("there are no prime numbers between %d and %d",n1,n2);
       exit(0);
   }
   printf("\nthe above are the prime numbers between %d and %d\n",n1,n2);
  }
    return 0;
}

