
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,n,a[100];
    float var,sd,mean,sum=0,sumv=0;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    mean=(float)(sum/n);
    for(i=0;i<n;i++)
    sumv=(sumv+(a[i]-mean)*(a[i]-mean));
    var=(sumv/n);
    sd=(sqrt(var));
    printf("mean %f\n var %f \n standard deviation is %f",mean,var,sd);
    return 0;
}
