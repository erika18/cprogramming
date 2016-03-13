#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,largest;
    printf("Enter the values of a , b, & c\n");
    scanf("%d%d%d",&a,&b,&c);
    largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The largest Value=%d",largest);
    return 0;
}
