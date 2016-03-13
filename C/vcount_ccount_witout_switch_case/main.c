#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[40],ch;
    int i,vow_count=0,con_count=0;
    printf("\n enter the string\n");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {

        if(isalpha(str[i]));
        {

            ch=tolower(str[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vow_count++;
            else
            con_count++;
        }
    }
    printf("no of vowels is %d\n",vow_count);
    printf("no of consonants is %d\n",con_count);


    return 0;
}
