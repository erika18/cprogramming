#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <string.h>
int main()
{
    struct timeval s;
    double start,stop,totaltime;
    char t[20],p[20];
    int m,n,i,j,flag=0;
    printf("Enter the string1\n");
    scanf("%s",t);
    printf("Enter the string2\n");
    scanf("%s",p);
    n=strlen(t);
    m=strlen(p);
    gettimeofday(&s,NULL);
    start=s.tv_sec+(s.tv_usec/1000000.0);
    for(i=0;i<=n-m;i++)
    {
      j=0;
      while(j<m&&p[j]==t[i+j])
      j=j+1;
      if(j==m)
      {
          flag=1;
          break;
      }
    }
    gettimeofday(&s,NULL);
    stop=s.tv_sec+(s.tv_usec/1000000.0);
    totaltime=stop-start;
    if(flag==0)
    printf("Unmatched string\n");
    else
    printf("%s starts from pos %d in %s\n",p,i+1,t);
    printf("\nTotal running time of the algorithm is %lf\n",totaltime);
    return 0;
}
