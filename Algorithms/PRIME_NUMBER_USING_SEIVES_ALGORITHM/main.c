#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<sys/time.h>
int main()
{
int n,i,a[500],j,l[500],p;
struct timeval tim;
double start,stop,totaltime;
printf("Enter a positive integer: \n");
scanf("%d",&n);
gettimeofday(&tim,NULL);
start=tim.tv_sec+(tim.tv_usec/1000000.0);
for(p=2;p<=n;p++)
a[p]=p;
for(p=2;p<=(sqrt(n));p++)
{
if(a[p]!=0)
j=p*p;
while(j<=n)
{
a[j]=0;
j=j+p;
}
}
i=0;
for(p=2;p<=n;p++)
{
if (a[p]!=0)
{
l[i]=a[p];
i=i+1;
}
}
printf("\nPrime number upto %d:\n\n",n);
for(j=0;j<i;j++)
printf(" %d\t",l[j]);
gettimeofday(&tim,NULL);
stop=tim.tv_sec+(tim.tv_usec/1000000.0);
totaltime=stop-start;
printf("\n\nElapsed time is %lf seconds!!\n",totaltime);
return 0;
}
