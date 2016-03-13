#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float sum=0,t=1;
    int n,i;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+t;
        t=(pow(-1,i))/(i+1);
    }
    printf("the sum of the series is %f",sum);
    return 0;
}
