#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int bfsm(char t[],char p[],int n,int m)
{
    int i,j;
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while((j<m)&&(p[j]==t[i+j]))
        {
            j=j+1;
        }
        if(j==m)
        {
            printf("\nsuccesful search position=%d",i+1);
            return;
        }
    }
    printf("\nunsuccesful");
}
int main()
{ int n=0,m=0;
char p[30],t[30];
    printf("text\n");
    scanf("%s",t);
    printf("pattern\n");
    scanf("%s",p);
    n=strlen(t);
    m=strlen(p);
    bfsm(t,p,n,m);
    return 0;
}
