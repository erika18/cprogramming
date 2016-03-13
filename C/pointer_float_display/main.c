#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float *ptr;
    float a[10];
    ptr=&a[0];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%f",&a[i]);
    for(i=0;i<n;i++)
    {
        printf("%f\t",*(ptr+i));
    }
    return 0;
}
