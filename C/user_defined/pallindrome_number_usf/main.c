#include <stdio.h>
#include <stdlib.h>
int num,n,digit,rev=0;
void pallin();
void pallin()
{
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
}

int main()
{

    printf("enter the number\n");
    scanf("%d",&num);
    pallin();

    return 0;
}
