#include <stdio.h>
#include <stdlib.h>
int fib(int);

int main()
{
    int f,n;
    printf("entr num");
    scanf("%d",&n);
    f=fib(n);
    printf("fib- %d",f);
    return 0;
}
int fib(int n)
{
    int x,y;
    if(n==1)
    return n;
    else
    x=fib(n-1);
    y=fib(n-2);
    return(x+y);
}
