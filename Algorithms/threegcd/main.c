#include <stdio.h>
#include <stdlib.h>
int m,n,r,gcd,t,rem1,rem2;
int middle(int m,int n)

{
    int a=2,g=1;
    while((m>=a&&m!=0)&&(n>=a&&n!=0))
    {
        if(m%a==0)
        {
            if(n%a==0)
            {
                g=g*a;
                n=n/a;
            }
            m=m/a;
        }
        else
        a++;
    }
    return g;

    }
    int euclids(int m,int n)
    {
        if(n==0)
        return m;
        else
        {
            while(n!=0)
            {
                r=m%n;
                m=n;
                n=r;
            }
            gcd=m;
            printf("gcd is %d",gcd);
        }

    }
    int consecutive(int m,int n,int t)
    {
        step1:if(m%t==0)
        goto step2;
        else
        goto step3;
        step2:if(n%t==0)
        return t;
        else
        goto step3;
        step3:t--;
        goto step1;

    }
int main()
{ int m,n,g,t,ch;
    printf("enter the value of m and n\n");
    scanf("%d%d",&m,&n);
    printf("1.euclid\n2.middle school\n3.consecutive\nenter ur choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:euclids(m,n);
        break;
        case 2:g=middle(m,n);
        printf("gcd is %d",g);
        break;
        case 3: if(m<n)
        t=m;
        else
        t=n;
        g=consecutive(m,n,t);
         printf("gcd is %d",g);
         break;
         case 4:exit(0);

    }
    return 0;
}
