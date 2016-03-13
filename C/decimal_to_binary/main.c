#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,rev=0,base=1;
    printf("\n enter the no in decimal form\n");
    scanf("%d",&n);
    do
    {
        d=n%2;
        n=n/2;
        rev=rev+(d*base);
        base=base*10;
    }
    while(n!=0);
    printf("\n the binary form=%d",rev);
    return 0;
}
