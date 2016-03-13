//Heap sort............
#include<stdio.h>
#include<conio.h>
#define false 0
#define true 1
void heapify(int a[],int n)
{
    int i,k,h,v,j;
    for(i=n/2;i>0;i--)
    {
        k=i;
        v=a[k];
        h=false;
        while(h!=1&&2*k<=n)
        {
            j=2*k;
            if(j<n)
            {
                if(a[j]<a[j+1])
                j++;
            }
            if(v>a[j])
            h= true;
            else
            {
                a[k]=a[j];
                k=j;
                a[j]=v;
            }
        }
    }
}
void heapsort(int a[],int n)
{
    int temp;
    heapify(a,n);
    temp=a[1];
    a[1]=a[n];
    a[n]=temp;
    if(n>1)
    heapsort(a,n-1);
}
int main()
{
    int i,n,a[100];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    heapsort(a,n);
    printf("Sorted array :\n");
    for(i=1;i<=n;i++)
    printf("%d\n",a[i]);
    return 0;
}
