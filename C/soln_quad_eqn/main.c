#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,x1,x2,d;
    printf("enter the coefficients of quadratic equation\n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b-(4*a*c));
    if(d==0)
    {
        printf("the given quadratic equation has real and identical equal roots \n");
        printf("roots are \n");
        x1=-b/(2*a);
        printf("\n x1=x2=%f",x1);
    }
    else if(d>0)
    {
        printf("\n the entered quadratic equation has real and unique roots");
        printf("\n the roots are \n");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("\n x1=%f \n x2=%f",x1,x2);
    }
    else

       {
        printf("\n the entered quadratic equation has imaginary roots");
        printf("\n the roots are\n");
        x1=-b/(2*a);
        x2=(sqrt(fabs(d)))/(2*a);
        printf("\n x1=%f+i%f \n x2=%f-i%f",x1,x2,x1,x2);
       }
 return 0;
}
