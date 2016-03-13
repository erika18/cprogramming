#include <stdio.h>

int a[20],key;

void binsearch(int hi,int lo)
{
     if(lo>hi)
     printf("Element not found");
     else
     {
          int mid=(hi+lo)/2;
          if(a[mid]==key)
          printf("Element found at location %d",mid+1);
          else if(a[mid]>key)
          binsearch(mid-1,lo);
          else
          binsearch(hi,mid+1);
     }
}

int main()
{
    int n,i;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter element to be searched:\n");
    scanf("%d",&key);
    binsearch(n-1,0);
    return 0;
}
