#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],n,j,i,temp;
    printf("\n enter the size");
    scanf("%d",&n);
    printf("\n enter the array elts");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    for(j=0;j<n-i;j++)
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    printf("\n");
    return 0;
}
