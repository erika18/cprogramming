#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,i,j;
    printf("enter the order of the matrix\n");
    scanf("%d %d",&m,&n);
    printf("enter the element of first matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("the first matrix elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("enter the element of second matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    printf("the second matrix elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("\n sum of two matrix is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}




