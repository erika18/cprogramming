#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int palin(char str1[])
{
    int i,n;
    char str2[15];
    n=strlen(str1);
    for(i=0;i<n;i++)
    str2[n-1-i]=str1[i];
    for(i=0;i<n;i++)
    if(str1[i]!=str2[i])
    {
        return 0;
    }
    else
    {
    return 1;
    }
}
void main()
{
    int flag;
    char str[30];
    printf("\nenter string\n");
    scanf("%s",&str);
    flag=palin(str);
    if(flag==0)
    printf("\nnot palindrome");
    else
    printf("\npalindrome");
}


