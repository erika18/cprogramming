#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10];
    int m,n,i,j,row_sum,col_sum;
    printf("enter the order of the matrix\n");
    scanf("%d %d",&m,&n);
    printf("enter the element of matrix\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
     for(i=0;i<m;i++)
     {
         row_sum=0;
         for(j=0;j<n;j++)
         {
             row_sum=row_sum+a[i][j];
         }
         printf("%d row sum is %d\n",i+1,row_sum);
     }

      for(j=0;j<n;j++)
      {
          col_sum=0;
          for(i=0;i<m;i++)
          {
              col_sum=col_sum+a[i][j];
          }
          printf("%d coloumn sum is %d\n",j+1,col_sum);
      }
      return 0;
     }
