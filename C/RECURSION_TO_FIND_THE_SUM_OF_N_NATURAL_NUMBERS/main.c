#include <stdio.h>
#include <stdlib.h>
long int sum(int m)
{
    if(m==0)
        return 0;
    return m+sum(m-1);
}

int main()
{
    int n;
    printf("enter the number of natural numbers\n");
    scanf("%d",&n);
    printf("the sum of %d natural numbers is %ld",n,sum(n));
    return 0;
}
