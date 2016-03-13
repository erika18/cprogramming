#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
void merge(int b[],int c[], int a[], int p, int q)
{
    int i=0,j=0,k=0,l,m;
    while(i<p && j<q)
    {
        if(b[i]<=c[j])
        {
            a[k]=b[i];
            i=i+1;
        }
        else
        {
            a[k]=c[j];
            j=j+1;
        }
        k=k+1;
    }
    if(i==p)
    {
        for(l=j;l<q;l++)
        {
            a[k++]=c[l];
        }
    }
    else
    {
        for(m=i;m<p;m++)
        {
            a[k++]=b[m];
        }
    }
}
void mergesort(int a[], int n)
{
    int i=0,b[20],c[20],p=0,q=0;
    if(n>1)
    {
        for(i=0;i<(n/2);i++)
        {
            b[p++]=a[i];
        }
        for(i=(n/2);i<n;i++)
        {
            c[q++]=a[i];
        }
        mergesort(b,p);
        mergesort(c,q);
        merge(b,c,a,p,q);
    }
}
int main()
{
    int n, a[10], i;
    struct timeval s;
    double start, stop,totaltime;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    gettimeofday(&s, NULL);
    start=s.tv_sec+(s.tv_usec/1000000.0);
    mergesort(a,n);
    gettimeofday(&s,NULL);
    stop=s.tv_sec+(s.tv_usec/1000000.0);
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    printf("%3d",a[i]);
    totaltime=stop-start;
    printf("\nRunning time is %lf sec\n", totaltime);
    return 0;
}
