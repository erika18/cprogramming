#include <stdio.h>
#include <stdlib.h>
int fibo(int m)
{
    if(m==1) return 0;
    if(m==2) return 1;
    return (fibo(m-1)+fibo(m-2));
}

int main()
{

    int n;
    printf("enter nth number \n");
    scanf("%d",&n);
    printf("%dth fibonacci number is",n);
    printf("%d\t",fibo(n));
    return 0;
}
