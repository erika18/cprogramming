#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num,sum=0;
    printf("enter a number\n");
    scanf("%d",&num);
    n=num;
    for(i=1;i<n;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(num==sum)
    printf("the entered number %d is perfect number\n",num);
    else
    printf("the entered number %d is not a perfect number\n",num);
    return 0;
}
