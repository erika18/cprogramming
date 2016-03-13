#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],i,j,small,pos;
      printf("\n Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("\n Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements before sorting is\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        if(small>a[j])
        {
            small=a[j];
            pos=j;
        }
        a[pos]=a[i];
        a[i]=small;
    }
    printf("\nthe sorted array is \n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
