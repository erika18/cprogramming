#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10],t[10],u[20];
    int i,j;
    printf("enter 1st string\n");
    scanf("%s",s);
    printf("enter 2nd string\n");
    scanf("%s",t);
    for(i=0;s[i]!='\0';i++)
    u[i]=s[i];
    for(j=0;t[j]!='\0';j++)


    u[i++]=t[j];
    u[i]='\0';


    printf("%s",u);

    return 0;
}
