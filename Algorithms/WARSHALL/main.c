#include <stdio.h>
#include <stdlib.h>
#include<sys/time.h>
int a[20][20],n,r[20][20];
void warshalls();
int main()
{
  int i,j;
  struct timeval tim;
  double dt1,dt2;
  printf("enter the size of matrix\n");
  scanf("%d",&n);
  printf("enter the adjaceny matrix\n");
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
     scanf("%d",&a[i][j]);
   }
  }
  printf("\nEntered matrix is:\n");
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  gettimeofday(&tim,NULL);
  dt1=tim.tv_sec+(tim.tv_usec/1000000.0);
  warshalls();
  gettimeofday(&tim,NULL);
  dt2=tim.tv_sec+(tim.tv_usec/1000000.0);

  printf("\nThe Transitive Closure is:\n");
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("%d\t",r[i][j]);
    }
    printf("\n");
  }
  printf("Elapsed Time: %lf",dt2-dt1);


  return 0;


}
void warshalls ()
{
  int k,i,j;

  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
     r[i][j]=a[i][j];
   }
  }
  for(k=1;k<=n;k++)
  {
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
        r[i][j]=(r[i][j]||(r[i][k]&& r[k][j]));
      }
    }
  }

}
