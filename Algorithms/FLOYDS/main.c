#include <stdio.h>
#include <stdlib.h>
#include<sys/time.h>
void floyd(int a[20][20],int r[20][20],int n);
int min(int a,int b)
{
    return(a<b?a:b);
}
int main()
{
        struct  timeval s;
        double start,end,total;
        int a[20][20],n,r[20][20],i,j;
        printf("enter the number of nodes\n");
        scanf("%d",&n);
        printf("enter the adjacency matrix\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        gettimeofday(&s,NULL);
        start=s.tv_sec+(s.tv_usec/1000000.0);
        floyd(a,r,n);
        printf("matrix is\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",r[i][j]);
            }
            printf("\n");
        }
        gettimeofday(&s,NULL);
        end=s.tv_sec+(s.tv_usec/1000000.0);
        total=end-start;
        printf("running time is %lf seconds\n",total);


    return 0;
    }
void floyd(int a[20][20],int r[20][20],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    r[i][j]=a[i][j];
    }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
        r[i][j]=min(r[i][j],r[i][k]+r[k][j]);
    }
    }
    }
    }
