#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

int partition(int a[],int low,int high)
{
int pivot,i,j,t;
pivot=a[low];
i=low;
j=high+1;
do
{
do
{
i=i+1;
}while(a[i]<pivot);
do
{
j=j-1;
}while(a[j]>pivot);
if(i<=j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}while(i<j);
t=a[low];
a[low]=a[j];
a[j]=t;
return j;
}

void quick(int a[],int low,int high)
{
int mid;
if(low<high)
{
mid=partition(a,low,high);
quick(a,low,mid-1);
quick(a,mid+1,high);
}
}

int main()
{
int i,a[1000],n;
struct timeval s;
double start,stop,totaltime;
printf("Enter the size:");
scanf("%d",&n);
printf("Enter array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
/*srand(NULL);
for(i=0;i<n;i++)
{
a[i]=rand()%1000;
}*/
printf("the entered array is \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
gettimeofday(&s,NULL);
start=s.tv_sec+(s.tv_usec/1000000.0);
quick(a,0,n-1);
gettimeofday(&s,NULL);
stop=s.tv_sec+(s.tv_usec/1000000.0);
totaltime=stop-start;
printf("Sorted array is\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("Totaltime taken is %lf",totaltime);
return 0;
}
