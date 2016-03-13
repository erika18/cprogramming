#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[100],sum=0,x;
    int n,i;
    printf("enter degree of poly\n");
    scanf("%d",&n);
    printf("entr co-efficient into array");
    for(i=n;i>=0;i--)
    {
       scanf("%f",&a[i]);
    }

    printf("entr value of x");
    scanf("%f",&x);
    for(i=n;i>0;i--)
    {
        sum=(sum+a[i]*x);
    }
    sum=sum+a[0];
    printf("\n the value of f(%2f) = %2f",x,sum);



    return 0;
}
