#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
int res[50], j=0;
void dfs(int n, int s1[10], int cost[10][10], int u)
{
    int v;
    s1[u]=1;
    for(v=0;v<n;v++)
    {
        if((s1[v]==0)&&(cost[u][v]==1))
        dfs(n,s1,cost,v);
    }
    res[j++]=u;
}

int main()
{
    int cost[10][10],i,j,n,s1[10];
    struct timeval s;
    double start, stop, totaltime;
    printf("Enter the no of nodes\n");
    scanf("%d",&n);
    printf("enter the adjacency matrix \n");
             for(i=0;i<n;i++)
             {
                 for(j=0;j<n;j++)
                 {

                     scanf("%d",&cost[i][j]);
                 }
             }
    for(j=0;j<n;j++)
    s1[j]=0;
    gettimeofday(&s,NULL);
    start=s.tv_sec+(s.tv_usec/1000000.0);
    for(i=0;i<n;i++)
    {
        if(s1[i]==0)
        dfs(n,s1,cost,i);
    }
    gettimeofday(&s,NULL);
    stop=s.tv_sec+(s.tv_usec/1000000.0);
    printf("Topological sorting order :\n");
    for(j=n-1;j>=0;j--)
    printf("%d\t",res[j]);
    totaltime=stop-start;
    printf("total time is %lf",totaltime);
    return 0;
}
