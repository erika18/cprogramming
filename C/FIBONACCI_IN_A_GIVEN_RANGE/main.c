#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n1,n2,i,j,a,b,sum;
    printf("enter the range \n");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        sum=0;
        a=0;
        b=1;
        for(j=2;j<=i;j++)
    {
        sum=a+b;
        a=b;
        b=sum;
         if(sum==i)
        printf("%d\t",sum);
    }
    }
    return 0;
}
