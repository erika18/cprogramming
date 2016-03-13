#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j,m,n,trace=0,sum=0;
    float normal;
    int a[10][10];
    printf("enter the order of the matrix\n");
    scanf("%d %d",&m,&n);
    if(m==n)
    {
        printf("enter the matrix elements\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        printf("the matrix is \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                printf("%d\t",a[i][j]);
                printf("\n");
        }
         for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                sum=sum+(a[i][j]*a[i][j]);
                if(i==j)
                trace=trace+a[i][j];
            }
        }
        normal=sqrt(sum);
        printf("the trace of matrix is %d\n",trace);
        printf("the normal of the matrix is %f",normal);
    }
    else
        printf("the entered order is not of square matrix ");
    return 0;
}
