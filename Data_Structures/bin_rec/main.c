#include <stdio.h>
#include <stdlib.h>
int a[20],x,n,i,y;
int main()
{
    int bin(int,int);

    printf("enter the size");
    scanf("%d",&n);
    printf("enter stored array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter ele to srch");
    scanf("%d",&x);
    y=bin(0,n-1);
    if(y==-1)
    printf("ele not found");
    else
    printf("ele found at %d",y+1);


    return 0;
}
int bin(int low,int high)
{
    int mid;
    if(low>high)
    return(-1);
    mid=(low+high)/2;
    return(x==a[mid]?mid:x<a[mid]?bin(low,mid-1):bin(mid+1,high));
}
