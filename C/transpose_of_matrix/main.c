#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10];
    int m,n,i,j;
    printf("enter the order of the matrix\n");
    scanf("%d %d",&n,&m);
    printf("enter the element of matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("the matrix elements are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("the transpose of the given matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d\t",a[j][i]);
        printf("\n");
    }
    return 0;
}
