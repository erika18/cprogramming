#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,d,r,sum=0,count=0,pos=0;
    printf ("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the digit to be checked for occurence\n");
    scanf ("%d",&d);
    t=n;
    while(t!=0)
    {
        r=t%10;
        count++;
        t=t/10;
    }
    while(n!=0)
    {
    r=n%10;
    sum=sum+r;
    if (d==r)
    {
    pos=count;
    }
    count--;
    n=n/10;
    }
    printf ("The sum of digits is %d\n",sum);
    printf ("The occurence of given number is %d\n",pos);
    return 0;
}
