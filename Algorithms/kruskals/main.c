#include <stdio.h>
#include <stdlib.h>
int e,n,b[10][10],root[10],v,a[10][10];
void findmin(int *v1,int *v2);
void update(int root[],int v1,int v2);
int kruskal()
{

    int i=0,j;
    int cost=0;
    int edge,v1,v2;
    while(i<n-1)
    {
        findmin(&v1,&v2);
        edge=a[v1][v2];
        a[v1][v2]=a[v2][v1]=0;
        if(root[v1]!= root[v2])
        {
            b[v1][v2]=b[v2][v1]=edge;
            update(root,v1,v2);
            cost=cost+edge;
            i=i+1;
        }
    }
    printf("matrix is\n");
    for(i=1;i<=n;i++)
    {
            for(j=1;j<=n;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");


    }
    return cost;
}
void update(int root[],int v1,int v2)
{
    int i;
    int t=root[v2];
        for(i=1;i<n;i++)
        {
            if(root[i]==t)
            root[i]=root[v1];
        }

}
void initialise()
{
    int i,j,v1,v2,edge;
    printf("entr the number of nodes and edges\n");
    scanf("%d",&n);
    scanf("%d",&e);
     for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
      a[i][j]=999;
       for(i=1;i<=n;i++)
       root[i]=i;
        for(i=1;i<=e;i++)
        {
            printf("entre the two vertices\n");
            scanf("%d%d",&v1,&v2);
            printf("enter the cost\n");
            scanf("%d",&edge);
            a[v1][v2]=edge;
        }

}
void findmin(int *v1,int *v2)
{
    int edge=0;
    int i,j;
     for(i=1;i<=n;i++)
      for(j=i+1;j<=n;j++)
      {
          if((edge>a[i][j]||edge==0)&&a[i][j]>0)
          {
              edge=a[i][j];
              *v1=i;
              *v2=j;
          }
      }
}
int main()
{
    int val;
    initialise();
    val=kruskal();
    printf("cost is %d \n",val);
    return 0;
}
