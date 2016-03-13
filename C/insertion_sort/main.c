#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,temp,j,a[20];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the array before sorting is\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    for(i=1;i<n;i++)
    {
        j=i;
        while((j>=1)&&(a[j]<a[j-1]))
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
        j=j-1;
    }
    printf("the array after sorting is \n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}
