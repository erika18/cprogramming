#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fact(int n);
    int n,i;
    printf("enter the no n to fin d the fact\n");
    scanf("%d",&n);
    i=fact(n);
    printf("factirial of %d is %d",n,i);
    return 0;
}
int fact(int n)
 {
     int x,y;
     if (n==0)
     return(1);
     else
     x=n-1;
     y=fact(x);
     return(n*y);
 }
