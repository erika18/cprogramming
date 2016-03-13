#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
void sel(int a[],int n)
{
int i,j,min,temp;
for(i=0;i<=n-2;i++)
{
min=i;
for(j=i+1;j<=n-1;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
int main()
{
struct timeval s;
double start,stop,totaltime;
int a[20],n,i;
printf("Enter the size of array:\n");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the entered array is\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
gettimeofday(&s,NULL);
start=s.tv_sec+(s.tv_usec/1000000.0);
sel(a,n);
gettimeofday(&s,NULL);
stop=s.tv_sec+(s.tv_usec/1000000.0);
totaltime=stop-start;
printf("Sorted array is:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("Total time=%lf\n",totaltime);
return 0;
}
