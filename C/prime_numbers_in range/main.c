#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n,i,j,count;
    printf("enter the number upto which we need to print the prime numbers\n");
    scanf("%d",&n);
    if(n==0||n==1)
    printf("the given number is neither prime nor composite");
    else
  {
      printf("the prime numbers are\n");
       for(i=2;i<=n;i++)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
        {
          if(i%j==0)
          count++;
        }

      if(count==0)
      printf("%d\t",i);
    }
  }
    return 0;
}
