#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int n,a[50];
int place(int k)
{
    int i;
        for(i=1;i<k;i++)
    {
        if((a[k]==a[i])||(abs(i-k)==(abs(a[i]-a[k]))))
        return 0;
    }
    return 1;
}
void nqueen()
{
    int k=1,i,count=0;
    a[k]=0;
    while(k!=0)
    {
        a[k]=a[k]+1;
        while(a[k]<=n && (!place(k)))
        a[k]++;
        if(a[k]<=n)
        {
            if(k==n)
            {
                printf("solution no %d\n",++count);
                for(i=1;i<=n;i++)
                printf("%d queen is placed on %d row %d column\n",i,i,a[i]);
            }
            else
            {
                k++;
                a[k]=0;
            }
        }
            else
            k--;
        }
    }

int main()
{
     printf("entre the num of queens\n");
     scanf("%d",&n);
     if(n<=3 && n>1)
    printf(" no solution\n");
    nqueen();
    return 0;
}
