#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],i,j,temp,num,low,high,mid=0,pos=-1;
    printf("\n Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("\n Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
            }
         }
     }

    printf("\n the sorted list is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n Enter the element to be searched\n");
    scanf("%d",&num);
    high=n-1;
    low=0;
    while(low<=high)
     {
         mid=(low+high)/2;
        if(num<a[mid])
         high=mid-1;
        else if(num>a[mid])
        low=mid+1;
        else
        {
            if(num==a[mid])
            {
                pos=mid+1;
                printf("the element %d is found at position %d",num,pos);
                exit(0);

            }
        }
     }
     if(pos==-1)
     printf("element not found");
     return 0;
}
