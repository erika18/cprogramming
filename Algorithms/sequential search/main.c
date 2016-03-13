#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
int sequential(int a[],int n,int key)
{
    int i;
    a[n]=key;
    i=0;
    while(a[i]!=key)
    i=i+1;
    if(i<n)
    return i;
    else
    return -1;
}
int main()
{
    struct timeval s;
    double start,stop,totaltime;
    int n,a[20],i,key,c;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the key element for searching\n");
    scanf("%d",&key);
    gettimeofday(&s,NULL);
    start=s.tv_sec+(s.tv_usec/1000000.0);
    c=sequential(a,n,key);
    gettimeofday(&s,NULL);
    stop=s.tv_sec+(s.tv_usec/1000000.0);
    totaltime=stop-start;
    printf("Given array \n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    if(c==-1)
    printf("\n%d is not found in given array\n",key);
    else
    printf("\n%d is found in %d position\n",key,c+1);
    printf("\nTotal running time of the algorithm is %lf\n",totaltime);
    return 0;
}
