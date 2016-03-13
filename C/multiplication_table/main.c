#include <stdio.h>
#include <stdlib.h>
#define ROW 5
#define COL 5
int main()
{
   int row,column,product[ROW][COL],i,j;
   for(j=1;j<=COL;j++)
   {

        printf("\t%4d",j);
   }
        printf("\n");
        printf("_____________________________________________");
        printf("\n");


   for(i=0;i<ROW;i++)
   {
       row=i+1;
       printf("%2d |",row);
       for(j=1;j<=COL;j++)
       {
           column=j;
           product[i][j]=row*column;
           printf("\t%4d",product[i][j]);
       }
       printf("\n");
    }
    return 0;
   }

