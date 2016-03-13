#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int l;
    char a[20];
    printf("enter the word\n");
    scanf("%s",a);
    l=strlen(a);
    printf("the entered word %s has %d letters",a,l);
    return 0;
}
