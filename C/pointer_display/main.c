#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,n,i;
    int a[10];
    ptr=&a[0];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}
