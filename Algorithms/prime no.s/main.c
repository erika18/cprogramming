#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int l[50],n,i,j,a[100],k;
    printf("Enter the no.s\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        a[i]=i;
    }
    for(i=2; i<=sqrt(n);i++)
    {
        if(a[i]!=0)
        {
            j=i*i;
        while(j<=n)
        {
            a[j]=0;
            j=j+i;
        }
        }
    }
    k=0;
     printf("The prime no.s are ");
    for(i=2; i<=n;i++)
    {
        if(a[i]!=0)
        {
            l[k]=a[i];
            printf("%d",l[k]);
            k=k+1;

        }
    }



    return 0;
}
