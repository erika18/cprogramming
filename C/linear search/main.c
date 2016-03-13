#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos=-1,a[10],n,key,i;
    printf("enter the number of terms in a array\n");
    scanf("%d",&n);
    printf("the array elements are\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        pos=i+1;

    }
    if(pos<0)
    printf("invalid key");
    else
    printf("the given number %d is in position %d",key,pos);
    return 0;
}
