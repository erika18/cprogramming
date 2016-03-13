#include <stdio.h>

void gcd(int a,int b)
{
     if(b==0)
     printf("GCD is %d",a);
     else
     gcd(b,a%b);
}

int main()
{
    int x,y,t;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&x,&y);
    if(x<y)
    {
         t=x;
         x=y;
         y=t;
    }
    printf("for %d and %d ",x,y);
    gcd(x,y);
    return 0;
}
