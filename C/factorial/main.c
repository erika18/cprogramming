#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fact=1;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n<0)
    printf("the factorial does not exist");
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
      printf("the factorial of the given number %d is %d",n,fact);
    }
    return 0;
}
