#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,s1=0,s2=0,i;
    printf("enter the first number\n");
    scanf("%d",&n1);
    printf("enter the second number\n");
    scanf("%d",&n2);
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        s1=s1+i;
    }
     for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        s2=s2+i;
    }
    if(n1==s2&&n2==s1)
    {
        printf("given numbers are amicable numbers");

    }
    else
    {
        printf("given numbers are not amicable numbers");
    }
    return 0;
}

