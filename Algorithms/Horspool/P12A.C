//Horspool............
#include<string.h>
#include<stdio.h>
#include<conio.h>
int horsp(int,int);
void stable(int);
char t[25],p[25],a[25];
int main()
{
    int i,j,k,m,n,y,a[256];
    printf("Enter the text : ");
    gets(t);
    printf("Enter the pattern : ");
    gets(p);
    n=strlen(t);
    m=strlen(p);
    y=horsp(n,m);
    if(y==-1)
    printf("Pattern not present.\n");
    else
    printf("\nPattern found in position %d.\n",y+1);
    return 0;
}
int horsp(int n,int m)
{
    int i,j,k;
    stable(m);
    i=m-1;
    while(i<=(n-1))
    {
        k=0;
        while(k<=(m-1)&&p[m-1-k]==t[i-k])
        k++;
        if(k==m)
        return(i-m+1);
        else
        {
            j=t[i];
            i=i+a[j];
        }
    }
    return(-1);
}
void stable(int m)
{
    int i,j;
    for(i=0;i<256;i++)
    a[i]=m;
    for(j=0;j<=m-2;j++)
    {
        i=p[j];
        a[i]=m-1-j;
    }
}
