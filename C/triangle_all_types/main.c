#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,s1,s2,s3;
    printf("enter the sides of the triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        s1=a;
        s2=b;
        s3=c;
    }
    else if(b>c)
    {
        s1=b;
        s2=c;
        s3=a;
    }
    else
    {
        s1=c;
        s2=a;
        s3=b;
    }
    if(s1>=s2+s3)
    {
        printf("the triangle is not possible");
        exit(0);
    }
    printf("the triangle is \n");
    if((s1==s2)&&(s2==s3))
    printf("equilateral triangle\n");
    else
    if((s1==s2)||(s2==s3)||(s1==s3))
    printf("isoseles triangle\n");
    else
    printf("scalene triangle\n");
    printf("and\n");
    if((s1*s1)==(s2*s2)+(s3*s3))
    printf("right angled triangle");
    else if((s1*s1)>(s2*s2)+(s3*s3))
    printf("obtuse angled triangle");
    else
    printf("acute angled triangle");
    return 0;
}
