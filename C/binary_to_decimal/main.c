#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rev=0,d,n,base=1;
    printf("\n enter the number in binary form\n");
    scanf("%d",&n);
    do
    {
        d=n%10;
        n=n/10;
        rev=rev+(d*base);
        base=base*2;
    }
    while(n!=0);
    printf("\n the decimal form %d",rev);
    return 0;
}
