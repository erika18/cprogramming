#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],i;
      printf("\n Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("\n Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
