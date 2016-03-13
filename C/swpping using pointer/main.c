#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *);
main()
{
 int a,b;
 printf("enter 2 numbers");
 scanf("%d%d",&a,&b);
 printf("\nthe values before swapping=%d and %d",a,b);
 swap(&a,&b);
 printf("\n the values after swapping=%d and %d",a,b);
}
void swap(int*a,int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    return(0);
}
