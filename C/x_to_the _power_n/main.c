#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=1;
    float x;
    double y=1.0;
    printf("enter the base value\n");
    scanf("%f",&x);
    printf("enter the exponential value\n");
    scanf("%d",&n);
    if(n==0)
    {
     printf("%f to the power %d is %lf",x,n,y);
     exit(0);
    }
    else if (x==0)
    {
        printf("%f to the power %d is %lf",x,n,0);
        exit(0);
    }
    else
    while(count<=fabs(n))
    {
        y=y*x;
        count++;
    }
    if(n<0)
     printf("%f to the power %d is %lf",x,n,1/y);
     else
    printf("%f to the power %d is %lf",x,n,y);
    return 0;
}
