#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[30],even_pos=0,odd_pos=0;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array elts");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
    if(i%2==0)
    {
        even_pos=even_pos+a[i];
    }
    else
    {
        odd_pos=odd_pos+a[i];
    }
    }

    printf("\neven postion sum= %d\n",even_pos);
    printf("\nodd postion sum= %d\n",odd_pos);
    return 0;
}
