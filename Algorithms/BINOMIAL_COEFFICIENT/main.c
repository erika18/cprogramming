#include <stdio.h>
#include<stdlib.h>
#include <sys/time.h>
int n,k,c[20][20];

int min(int x,int y)
{
 if(x<y)
  return x;
  else
  return y;
}
int binomial(int n,int k)
{

  int i,j;
 for(i=0;i<=n;i++)
  {
   for(j=0;j<=min(i,k);j++)
    {
     if(j==0 || i==j)
      {
       c[i][j]=1;
      }
     else
     c[i][j]=c[i-1][j-1]+c[i-1][j];
    }
  }
 return (c[n][k]);
}
int main()
{
int temp,i,j;
struct timeval tim;
 double dt1,dt2;
printf("enter the value of n:\n");
scanf("%d",&n);
printf("enter the value of k:\n");
scanf("%d",&k);
 gettimeofday(&tim,NULL);
  dt1=tim.tv_sec+(tim.tv_usec/1000000.0);
temp=binomial(n,k);
 gettimeofday(&tim,NULL);
  dt2=tim.tv_sec+(tim.tv_usec/1000000.0);

    printf("the matrix is\n");
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=min(i,k);j++)
      {
       printf("%d\t",c[i][j]);
      }
      printf("\n");
    }
printf("\nbinomial coffecient is %d\n",temp);
 printf("Elapsed Time: %lf",dt2-dt1);
return 0;
}

