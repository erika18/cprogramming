#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,count=0;
    printf("enter the sting\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("string length is %d",count);
    return 0;
}
