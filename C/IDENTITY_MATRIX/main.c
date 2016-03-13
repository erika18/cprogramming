#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[10][10],m,n;
    int flag=0;
 label: printf("enter the order of the matrix\n");
    scanf("%d %d",&m,&n);
    if(m==n)
    {
        printf("enter the matrix elements\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        printf("the entered matrix is\n");
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
                if(i==j)
                   {
                       if(a[i][j]!=1)
                    flag++;
                   }
                else
                    if(a[i][j]!=0)
                    flag++;
            }
        }
        if(flag==0)
            printf("the entered matrix is identity matrix");
        else
            printf("the entered matrix is not a identity matrix");
    }
    else
        goto label;
    return 0;
}
