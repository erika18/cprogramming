#include <stdio.h>
#include <stdlib.h>
 int n,a[10],i,temp,j;
 void bubble_sort();


int main()
{

    printf("\n Enter the number of elements of array\n");
    scanf("%d",&n);
    printf("\n Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort();

    return 0;
}
void bubble_sort()
{
    for(i=0;i<=n-2;i++)
     {
        for(j=0;j<=n-2-i;j++)
        if(a[j]>a[j+1])
             {
                 temp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=temp;
            }
         }
     printf("the sorted array list using bubble sort is\n");
      for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
