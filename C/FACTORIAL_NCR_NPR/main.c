#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int fact=1;
    double ncr,npr,f1=1,f2=1,f3=1;
    int n,r,i,f,choice;
    printf("1:FACTORIAL\n2:NCR\n3:NPR\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: {
              printf("enter the number whose factorial need to be found\n");
              scanf("%d",&f);
              if(f<0)
              printf("factorial does not exist\n");
              else if(f==0)
              printf("factorial of %d is %ld",f,fact);
              else
             {
              for(i=1;i<=f;i++)
              {
                fact=fact*i;
              }
              printf("factorial of %d is %ld",f,fact);
             }
             break;
           }
    case 2: {
              printf("enter the n value\n");
              scanf("%d",&n);
              printf("enter r value\n");
              scanf("%d",&r);
              for(i=1;i<=n;i++)
                f1=f1*i;
              for(i=1;i<=r;i++)
                f2=f2*i;
              for(i=1;i<=n-r;i++)
                f3=f3*i;
                ncr=f1/(f2*f3);
                printf("%dC%d = %lf",n,r,ncr);
                break;
           }
   case 3:{
            printf("enter the n value\n");
              scanf("%d",&n);
              printf("enter r value\n");
              scanf("%d",&r);
              for(i=1;i<=n;i++)
                f1=f1*i;
              for(i=1;i<=n-r;i++)
                f3=f3*i;
                npr=f1/f3;
                printf("%dP%d = %lf",n,r,npr);
                break;
           }

   default : printf("invalid choice");
 }
    return 0;
}
