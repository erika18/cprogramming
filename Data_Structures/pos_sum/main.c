#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,esum=0;
    printf("enter number");
    scanf("%d",&n);

    if(n%2==0)

        for(i=n;i>0;i-2)
        {
           a=n%10;
           esum=esum+a;
           n=n/10;
        }

    }

    printf("\neven postion sum= %d\n",esum);
    //printf("\nodd postion sum= %d\n",odd_pos);
    return 0;
}
