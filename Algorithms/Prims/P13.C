//Prims..............
#include<stdio.h>
#include<conio.h>
int b[10][10],a[10][10],visited[10],n;
void prim(int v);
void findmin(int *v1,int *v2);
int main()
{
    int i,j,v,k,c;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    printf("Enter the number of edges : ");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    a[i][j]=999;
    for(i=1;i<=n;i++)
    visited[i]=0;
    for(i=1;i<=k;i++)
    {
        printf("\nEnter the two vertices v1 & v2.\n");
        scanf("%d%d",&j,&v);
        printf("\nEnter the corresponding cost.\n");
        scanf("%d",&c);
        a[j][v]=a[v][j]=c;
    }
    printf("Enter the starting vertex : ");
    scanf("%d",&v);
    prim(v);
    return 0;
}
void prim(int v)
{
    int c=0,i,e,v1,v2;
    visited[v]=1;
    for(i=1;i<n;i++)
    {
        findmin(&v1,&v2);
        e=a[v1][v2];
        printf("\nVisited vertex %d %d.",v1,v2);
        b[v1][v2]=b[v2][v1]=e;
        visited[v1]=visited[v2]=1;
        c=c+e;
    }
    printf("\nCost of mst=%d.",c);
}
void findmin(int *v1,int *v2)
{
    int e=0,i,j;
    for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
    {
        if((visited[i]==1&&visited[j]!=1)||(visited[i]!=1&&visited[j]==1))
        if((e>a[i][j]||e==0)&&a[i][j]>0)
        {
            e=a[i][j];
            *v1=i;
            *v2=j;
        }
    }
}
