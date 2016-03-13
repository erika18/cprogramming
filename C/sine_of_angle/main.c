#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1426
int main ()
{
    int i;
    float d,term,x,sum;

    printf("Enter degree\n");
    scanf("%f",&d);
    x=d*(PI/180);
    term=x;
    sum=term;
    for(i=3;i<1000;i=i+2)
    {
     term=-(term*x*x)/(i*(i-1));
     sum=sum+term;
    }
    printf ("sin%f is %f\n",d,sum);
    printf ("sin%f Using library function is =%f",d,sin(x));
    return 0;
}
