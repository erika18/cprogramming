#include<stdio.h>
int main()
{
    int a[20],temp[20];
    int i,n,j;
    printf("enter the number of integers\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    j=n-1;
    for(i=0;i<n;i++,j--)
    {
        temp[i]=a[j];
    }
    printf("the length of the array is %d\n",n);
    printf("the reverse integer list is\n");
    for(i=0;i<n;i++)
    printf("%d\t",temp[i]);
    return 0;

}
