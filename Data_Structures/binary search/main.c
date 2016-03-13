#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i,num,low=0,mid,high,a[10];
    printf("enter the size\n");
    scanf("%d",&n);
    printf("\n array elts\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the num to b searched\n");
    scanf("%d",&num);
    high=n-1;
    while(low<=high);
    {
        mid=(low+high)/2;
        if(num==a[mid])
    {
  printf("num found %d",mid+1);
}
else if(num<a[mid])
{

    high=mid-1;
}
else
{
    low=mid+1;
}
    }
return 0;
}


