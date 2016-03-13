#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int fact(int i)
{
    int fact=1,j;
    for(j=1;j<=i;j++)
        fact=fact*i;
        return fact;
}

int main()
{
    int x,n,i;
    double sum=1;
    printf("enter the value of x and n\n");
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++)
      {
        sum=sum+pow(x,i)/fact(i);
      }

    printf("e^%d=%lf\n",x,sum);
    return 0;
}
