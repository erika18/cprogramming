#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int f;
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial %d",f);
    return 0;
}
int fact(int n)
{
    int x,y;
    if(n==0)
    return(1);
    x=n-1;
    y=fact(x);
    return(n*y);

}
