#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i,n;
    float sum=0,t=1;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+t;
        t=(pow(-1,i))/(i+1);
    }
    printf("sum=%f",sum);
    return 0;
}
