#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("the numbers before swapping are \n a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("the numbers after swapping are \n a=%d and b=%d",a,b);
 return 0;
}
