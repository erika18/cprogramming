#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],i,temp,j;
      printf("\n Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("\n Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<=n-2;i++)
      {
        for(j=0;j<=n-i-2;j++)
         {
           if(a[j+1]<a[j])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
         }
      }
     printf("the sorted array list using bubble sort is\n");
      for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
