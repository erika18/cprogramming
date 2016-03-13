#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
int a[20][20],n,visited[20],count=0;
void dfs(int i)
{
int j;
visited[i]=1;
for(j=1;j<=n;j++)
{
if((visited[j]==0)&&(a[i][j]))
{
printf("%d\t",j);
dfs(j);
}
}
}
void DFS()
{
int i;
for(i=1;i<=n;i++)
visited[i]=0;
printf("DFS traversal is \n");
for(i=1;i<=n;i++)
{
if(visited[i]==0)
{
printf("%d\t",i);
dfs(i);
count++;
}
}
}
int main()
{
int i,j;
struct timeval tim;
double dtime1,dtime2;
printf("Enter the no of vertices\n");
scanf("%d",&n);
printf("Enter the adjacency matrix\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
gettimeofday(&tim,NULL);
dtime1=tim.tv_sec*1000000.00 +tim.tv_usec;
DFS();
gettimeofday(&tim,NULL);
dtime2=tim.tv_sec*1000000.00 +tim.tv_usec;
if(count>1)
{
printf("\nGraph is disconnected\n");
printf("It has %d components\n",count);
}
else
printf("Graph is connected\n");
printf("Time complexity=%lf micro sec\n",(dtime2-dtime1));
}
