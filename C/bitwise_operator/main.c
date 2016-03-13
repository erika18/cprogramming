#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nthe given two numbers are %d and %d",a,b);
    c=a&b;
    d=a|b;
    e=a^b;
    f=a>>2;
    g=a<<2;
    printf("\nthe result of operator bitwiseAND is %d",c);
    printf("\nthe result of operator bitwiseOR is %d",d);
    printf("\nthe result of operator bitwiseXOR is %d",e);
    printf("\nthe result of operation right shift is %d",f);
    printf("\nthe result of operation left shift is %d",g);
    return 0;
}
