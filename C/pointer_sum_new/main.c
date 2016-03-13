#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,sum=0,n,i;
    int a[10];
    ptr=a;

    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("MENORY LOCATION OF THE FIRST VALUE %u\n",&ptr[0]);
    i=0;
    while(i<n)
    {
        sum=sum+(*ptr);
        i++;
        ptr++;
    }
    printf("sum is %d\n",sum);

    printf("FINAL MEMORY LOCATION AFTER ACCESSING IN %d INTEGERS IS  ptr=%u",n,ptr);
    return 0;
}
