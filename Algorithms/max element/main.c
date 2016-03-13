#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
int a[10];
int maxval(int n)
{
    int max,i;
    max=a[0];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>max)
         max=a[i];
    }
    return max;
}
int main()
{
    int n,i,x;
    struct timeval s;
    double start,stop,totaltime;
    printf("Enter the no. \n");
    scanf("%d",&n);
    printf("Enter the array elemnets\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    gettimeofday(&s,NULL);
    start=s.tv_sec+(s.tv_usec/1000000.0);
    x=maxval(n);
    gettimeofday(&s,NULL);
    stop=s.tv_sec+(s.tv_usec/1000000.0);
    totaltime=stop-start;
    printf("The maximumvalue in the array is %d",x);
    printf("\n Running time=%lf seconds",totaltime);
    return 0;
}
