#include <stdio.h>
#include <stdlib.h>
char fn[20],sn[20],ln[20],name[20];
int i,j,k;
void concat();
void concat()
{
    for(i=0;fn[i]!='\0';i++)
    name[i]=fn[i];

    name[i]=' ';
    for(j=0;sn[j]!='\0';j++)
    name[i+j+1]=sn[j];

    name[i+j+1]=' ';
     for(k=0;ln[k]!='\0';k++)
    name[i+j+k+2]=ln[k];

    name[i+j+k+2]='\0';
    printf("the concatinated string is %s",name);
}

int main()
{
    printf("enter the first name\n");
    gets(fn);
    printf("enter the second name\n");
    gets(sn);
     printf("enter the last name\n");
    gets(ln);
    concat();
    return 0;
}
