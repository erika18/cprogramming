#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,sum=0,n,i;
    int a[10];
    ptr=&a[0];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("sum is %d",sum);
    return 0;
}
