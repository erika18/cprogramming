#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos=-1,a[10],n,key,i;
    int *p;
    printf("enter the number of terms in a array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=&a[0];
    printf("enter the element to be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==*(p+i))
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    printf("invalid key");
    else
    printf("the given number %d is in position %d",key,pos);
    return 0;
}
