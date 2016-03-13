#include <stdio.h>
#include <stdlib.h>
 int a[10][10],b[10][10],c[10][10];
    int i,j,k,m,n,p,q;
void input();
void product();
void output();
void input()
{


    printf("enter the element of first matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("enter the element of second matrix\n");
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);

}
void product()
{

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
    {
        c[i][j]=0;
        for(k=0;k<n;k++)
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
    }

}
void output()
{
       printf("the product matrix is\n");
       for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }



}
int main()
{
    printf("enter the order of first matrix\n");
    scanf("%d %d",&m,&n);
    printf("enter the order second matrix");
    scanf("%d %d",&p,&q);
     if(n!=p)
    {
        printf("multiplication not possible");
        exit(0);
    }
    input();
    product();
     output();

    return 0;

}

