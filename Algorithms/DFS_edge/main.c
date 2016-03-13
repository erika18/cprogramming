#include <stdio.h>
#include <stdlib.h>
int flag=0,con=0,count=0,n,e,v1,v2,v[10],i,j,k,a[10][10];

int main()
{
    printf("Enter vertices : ");
    scanf("%d",&n);
    printf("enter the no. of edges : ");
    scanf("%d",&e);
    printf("\nEnter edges on by on : ");
    for(i=1;i<=e;i++)
    {
        scanf("%d%d",&v1,&v2);
        a[v1][v2]=1;
    }
    printf("\n\nDFS \n ");
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        v[i]=0;
        dfs(k);
        for(i=1;i<=n;i++)
        {
            if(v[i]==0)
            {
                flag=1;
                break;
            }
        }
            if(flag==0)
            con++;
    }
    if(con==0)
        printf("\nNot connected \n");
    else if(con==n)
        printf("\nstrongly connected");
    else
        printf("\not strongly connected");
    return 0;
}
void dfs(int m)
{
    int w;
    count++;
    v[m]=count;
    printf("Vertex %d is visited \n",m);
    for(w=1;w<=n;w++)
    {
        if((a[m][w]==1)&&(v[w]==0))
        dfs(w);
    }
}
