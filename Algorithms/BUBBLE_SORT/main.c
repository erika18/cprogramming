#include <stdio.h>
#include <stdlib.h>
#include<sys/time.h>
void bs(int a[],int n)
{
int i,j,temp;
for(i=0;i<=n-2;i++)
{
for(j=0;j<=n-i-2;j++)
{
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
int main()
{
struct timeval s;
double start,stop,totaltime;
int a[20],n,i;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the entered element is\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
gettimeofday(&s,NULL);
start=s.tv_sec+(s.tv_usec/1000000.0);
bs(a,n);
gettimeofday(&s,NULL);
stop=s.tv_sec+(s.tv_usec/1000000.0);
totaltime=stop-start;
printf("Sorted array is:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("Total time=%f\n",totaltime);
return 0;
}
