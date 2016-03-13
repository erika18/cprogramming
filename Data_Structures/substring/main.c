#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,count=0,len=0;
    char a[20],b[20];
    printf("enter main string\n");
    gets(a);
    printf("enter substring\n");
    gets(b);
    len=strlen(b);
    while(a[i]!='\0')
    {
        if(a[i]==b[j])
        {
            j++;
            if(j==len)
            {
                j=0;
                count++;
            }
        }
        else
        j=0;
        i++;
    }
    if (count==0)
    printf("\nsubstring not present");
    else
    printf("\nsubstr present at %d time");
    return 0;
}
