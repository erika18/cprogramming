#include <stdio.h>
#include <stdlib.h>
#include<sys/time.h>
#define null 0
int main()
{
   struct timeval s;
  double start,stop,totaltime=0;
  int n,m,i,j;
  char t[50],p[50];
  printf("Enter size of text");
  scanf("%d",&n);
  printf("Enter size of pattern");
  scanf("%d",&m);
  printf("Enter Text\n");
  scanf("%s",t);

  printf("Enter Pattern\n");


  scanf("%s",p);
gettimeofday(&s,null);
  start=s.tv_sec+(s.tv_usec/1000000.0);
  for(i=0;i<=n-m;i++)
    {
        j=0;
        while((j<m)&&(p[j]==t[i+j]))
             {
                 j=j+1;
             }
        if(j==m)
          {
             printf("Pattern found from %d\n",i+1);

             break;
          }


    }
   if(j!=m)
    {
        printf("pattern not found\n");
    }
     gettimeofday(&s,null);
    stop=s.tv_sec+(s.tv_usec/1000000);
    totaltime=start-stop;
    printf("Total Time=%lf",totaltime);
    return 0;
}
