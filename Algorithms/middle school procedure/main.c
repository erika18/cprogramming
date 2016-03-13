#include <stdio.h>
#include <stdlib.h>
int gcd(int m, int n)
{
    int a=2,g=1;
    while((m>=a&&m!=0)&&(n>=a&&n!=0))
    {
        if(m%a==0)
        {
            if(n%a==0)
            {
                g*=a;
                n/=a;
            }
            m/=a;

        }
        else
        a++;
    }
    return g;
}
int main()
{
    int m,n;
    printf("Enter the values for m and n\n");
    scanf("%d%d",&m,&n);
    printf("GCD=%d",gcd(m,n));
    return 0;
}
