#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,sum=0;
    printf("enter the range n1 and n2\n");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        sum=sum+i;

    }
    printf("the sum of given series is %d",sum);
    return 0;
}
