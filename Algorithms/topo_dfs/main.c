#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
int a[10][10],s[10],j=0,res[10],n;
void topo(int n,int a[10][10])
{
    int i,u;
    for(i=1;i<=n;i++)
    s[i]=0;
    for(u=1;u<=n;u++)
    {
        if(s[u]==0)
        {
            dfs(u);
        }
    }
}
void dfs(int u)
{
    int v;
    s[u]=1;
    for(v=1;v<=n;v++)
    {
        if(a[u][v]==1 && s[v]==0)
        {
            dfs(v);
        }
    }
    j=j+1;
    res[j]=u;
}
int main()
{
    struct timeval s;
    double totaltime,start,stop;
    int i,k;
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:");
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n;k++)
        {
            scanf("%d",&a[i][k]);
        }
    }
    for(i=1;i<=n;i++)
    gettimeofday(&s,NULL);
    start=s.tv_sec+(s.tv_usec/1000000.0);
    topo(n,a);
    gettimeofday(&s,NULL);
    stop=s.tv_sec+(s.tv_usec/1000000.0);
    totaltime=stop-start;
    printf("Topological sorting order:\n");
    for(i=n;i>0;i--)
    printf("%d\t",res[i]);
    printf("\ntotaltime=%f",totaltime);
    return 0;
}
