#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bins( int [],int , int , int );
    int a[30],n,i,f,x;
    printf("enter the size of arry\n");
    scanf("%d",&n);
    printf("enter arry element\n");
    i=0;
    while(i<n)
     {
         scanf("%d",&a[i]);
         i++;
     }
     printf("enter the key element\n");
     scanf("%d",&x);
     f=bins(a,x,0,n-1);
     if (f==-1)
     printf("key not found");
   else
     printf("%dfound in position %d",x,f+1);
    return 0;
}
int bins(int a[40], int x, int l, int h)
 {
      int mid;
     if(l>h)
     return(-1);
     mid=(l+h)/2;
     if(x==a[mid])
      return(mid);
      if(x<a[mid])
       bins(a,x,l,mid-1);
     else
     bins(a,x,mid+1,h);
     //return;


 }
