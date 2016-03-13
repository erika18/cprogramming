#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float ratio=0;
    printf("enter 2 num\n");
    scanf("%d%d",&a,&b);
    ratio=a/b;
    if(ratio>0)
    {
        printf("ratio is %f",ratio);
    }
    else
    {
        b=a+b;
        a=b-a;
        b=b-a;
        ratio=a/b;
        printf("ratio is %f",ratio);
    }

    return 0;
}
