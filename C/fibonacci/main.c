#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,n1=0,n2=1,num,fibonacci;
    printf("enter the number of fibonacci numbers\n");
    scanf("%d",&num);
    if(num==0)
    {
        printf("error! entered number should be greater than 0 \n");
        exit(0);
    }
    printf("\nthe fibonacci numbers are\n");
    if(num==1)
    {
        printf("%d",n1);
        exit(0);
    }
    else
    {
        printf("\n %d",n1);
        printf("\n %d",n2);
          while(i<num)
           {
             fibonacci=n1+n2;
             printf("\n%d",fibonacci);
             n1=n2;
             n2=fibonacci;
             i++;
           }

    }

    return 0;
}
