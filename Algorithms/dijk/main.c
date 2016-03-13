#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b) (a<b?a:b)
int cs[10][10],n;
void dijk(int v)
{
    int i,nm,min,d[10],s[10],u,w;
    for(i=1;i<=n;i++)
    {
        s[i]=0;
        d[i]=cs[v][i];
    }
    for(nm=1;nm<=n;nm++)
    {
        min=999;
        for(i=1;i<=n;i++)
        if((d[i]<min)&&(s[i]==0))
        {
            u=i;
            min=d[i];
        }
        s[u]=1;
        for(w=1;w<=n;w++)
        if(s[w]==0)
        d[w]=MIN(d[w],d[u]+cs[u][w]);
    }
    printf("distance from %d to is\n",v);
    for(i=1;i<=n;i++)
    printf("%d=%d\n",i,d[i]);
}
int main()
{
    int i,j,v,k,w;
    printf("enter the number of vertices and edges\n\n");
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
     for(j=1;j<=n;j++)
     if(i==j)
     cs[i][j]=0;
     else
     cs[i][j]=999;
      for(i=1;i<=k;i++)
      {

          printf("enter the edges and vertices\n");
          scanf("%d%d%d",&j,&v,&w);
          cs[j][v]=w;
      }
      printf("enter the starting vertex\n");
      scanf("%d",&i);
      dijk(i);
    return 0;
}
