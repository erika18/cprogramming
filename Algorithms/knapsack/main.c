#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{
    return(a>b?a:b);
}
void knapsack(int n,int w[20],int v[20],int m,int t[20][20])
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0||j==0)
            t[i][j]=0;
            else if(j-w[i]>=0)
            t[i][j]=max(t[i-1][j],t[i-1][j-w[i]]+v[i]);
            else
        t[i][j]=t[i-1][j];
        }
    }
}
void optimal(int n,int m,int w[20],int table[20][20])
{
    int i,j,x[10];
    printf("\noptimal value =%d\n",table[n][m]);
    for(i=0;i<n;i++)
    x[i]=0;
    i=n;
    j=m;
    while(i!=0 && j!=0)
    {
        if(table[i][j] != table[i-1][j])
        {
            x[i]=1;
            j=j-w[i];
        }
        i=i-1;
    }
    for(i=1;i<=n;i++)
    printf("item %d=%d\n",i,x[i]);
}
int main()
{
    int n,i,j,w[20],v[20],m,t[20][20];
    printf("enter the number of items\n");
    scanf("%d",&n);
    printf("enter the weights of the items\n");
    for(i=1;i<=n;i++)
    scanf("%d",&w[i]);
    printf("enter the values of the items\n");
     for(i=1;i<=n;i++)
    scanf("%d",&v[i]);
    printf("enter the maximum capacity\n");
    scanf("%d",&m);
    knapsack(n,w,v,m,t);
    printf("tabulated values are\n");
    printf("\t");
    for(i=0;i<=m;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",i);
        for(j=0;j<=m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    optimal(n,m,w,t);
    return 0;
}
