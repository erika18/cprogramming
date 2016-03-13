#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
void tower(int n,char src, char dest, char aux)
{
    if(n==1)
    {
        printf("Move the disk %d from %c to %c\n",n,src,dest);
        return;
    }
    else
    {
        tower(n-1,src,aux,dest);
        printf("Move the disk %d from %c to %c\n",n,src,dest);
        tower(n-1,aux,dest,src);
    }
}
int main()
{
   int n;
    struct timeval s;
    double start,stop,totaltime;
    printf("Enter the no. \n");
    scanf("%d",&n);
    gettimeofday(&s,NULL);
    start=s.tv_sec+(s.tv_usec/1000000.0);
    tower(n,'a','c','b');
    gettimeofday(&s,NULL);
    stop=s.tv_sec+(s.tv_usec/1000000.0);
    totaltime=stop-start;

    printf("\n Running time=%lf seconds",totaltime);

    return 0;
}
