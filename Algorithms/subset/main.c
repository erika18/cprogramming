#include <stdio.h>
#include <stdlib.h>
int w[10],x[10],n,m,count=0;
void read()
{
    int i;
    printf("enter the number of elemnts in the set\n");
    scanf("%d",&n);
    count=0;
    for(i=0;i<=n;i++)
    x[i]=0;
    printf("enter the elments in ascending order\n");
     for(i=1;i<=n;i++)
     scanf("%d",&w[i]);
     printf("enter the sum required\n");
     scanf("%d",&m);
}
void subset(int s,int k,int r)
{
    int i;
    x[k]=1;
    if(s+w[k]==m)
    {
        count=count+1;
        printf("soulutin %d: \n",count);
        printf("{ ");
         for(i=1;i<=k;i++)
         if(x[i]==1)
         printf("%d",w[i]);
         printf("");
         printf("  }\n");
    }
    else
    {
        if(s+w[k]+w[k+1]<=n)
        subset(s+w[k],k+1,r-w[k]);

    }
    if(s+r-w[k]>=m && (s+w[k+1])<=m)
    {
        x[k]=0;
        subset(s,k+1,r-w[k]);
    }
}
void subs()
{
    int i,sum=0;
     for(i=1;i<=n;i++)
     sum+=w[i];
     if(sum<m || w[i]>m)
     printf("\n no solution\n");
     else
     subset(0,1,sum);
}
int main()
{
    read();
    subs();
    return 0;
}
