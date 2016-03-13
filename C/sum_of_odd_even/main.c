#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n1,n2,even=0,odd=0;
    printf("enter the n1 and n2 values\n");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        if(i%2==0)
        even=even+i;
        else
        odd=odd+i;
    }
    printf("\nthe sum of even numbers is %d",even);
    printf("\nthe sum of odd numbers is %d",odd);
    return 0;
}
