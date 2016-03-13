#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,d1,d2,d3,temp,i;
    printf("enter the the 3 digit ending number in the range beginning from 0\n");
    scanf("%d",&n);
    printf("the armstrong numbers are\n");
    for(i=1;i<=n;i++)
    {
        d1=i-((i/10)*10);
        d2=(i/10)-((i/100)*10);
        d3=(i/100)-((i/1000)*10);
        temp=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
        if(temp==i)
        printf("%d\n",i);
    }
    return 0;
}
