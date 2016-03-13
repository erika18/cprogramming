#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,n,digit,rev=0;
    printf("enter the number\n");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        rev=digit+(10*rev);
    }
    if(num==rev)
    {
        printf("the given number is pallandrome");
    }
    else
    {
        printf("the given number is not pallindrome");
    }
    return 0;
}
