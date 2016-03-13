#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],i,j,min,temp;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the given array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    printf("\nthe sorted array is\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
