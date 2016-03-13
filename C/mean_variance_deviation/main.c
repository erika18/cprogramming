#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a[10],i,n;
    float mean,dev,var,v=0,sum=0;
    printf("enter the numbers in the series\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    mean=sum/n;
    for(i=0;i<n;i++)
    v=v+((a[i]-mean)*(a[i]-mean));
    var=v/n;
    dev=sqrt(var);
    printf("the mean is %f\n",mean);
    printf("the variance is %f\n",var);
    printf("the deviation is %f\n",dev);
    return 0;
}
