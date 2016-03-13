#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
int main()
{
struct timeval s;
double start,stop,totaltime;
int n,a[10],i,j,temp;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The entered elements are\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
gettimeofday(&s,NULL);
start=s.tv_sec+(s.tv_usec/1000000.0);
for(i=1;i<n;i++)
{
j=i;
while(j>=1 && a[j]<a[j-1])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
j=j-1;
}
}
stop=s.tv_sec+(s.tv_usec/1000000.0);
totaltime=stop-start;
printf("\nThe sorted array is\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\nTotal time in sec %lf\n",totaltime);
return 0;
}
