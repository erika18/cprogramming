#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[20],str2[20];
    int pos;
    printf("enter the first string\n");
    gets(str1);
    printf("enter the second string\n");
    gets(str2);
    pos=strcspn(str1,str2);
    if(pos==-1)
    printf("no character of %s is present in %s \n",str2,str1);
    else
    printf("position =%d\n",pos);
    return 0;
}
