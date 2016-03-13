#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter 2 num\n");
    scanf("%d%d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("the value of a is %d and the value of b is %d",a,b);
    return 0;
}
