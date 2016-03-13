#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char s1[20],s2[20],s3[20];
void str()
{
    if(strcmp(s1,s2)!=0)
    {
        strcat(s1,s2);
    }
    strcpy(s3,s1);
}
void pri()
{
    printf("the string s1 is %s and its length is %d\n",s1,strlen(s1));
    printf("the string s2 is %s and its length is %d\n",s2,strlen(s2));
    printf("the string s3 is %s and its length is %d\n",s3,strlen(s3));
}
int main()
{
    printf("enter the string 1\n");
    gets(s1);
    printf("enter the string 2\n");
    gets(s2);
    str();
    pri();
    return 0;
}
