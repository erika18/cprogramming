#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    char a;

    printf("enter a character\n");
    a=getchar();

     if(isprint(a))
    {
         if(isalnum(a))
          {
            printf("\nthe entered character %c is a alphanumeric",a);

           if(isalpha(a))
           printf("\nthe entered character %c is a alphabet",a);
           else  if(isdigit(a))
           printf("\nthe entered character %c is a digit",a);
          }
        else  if(isupper(a))
        printf("\nthe entered character %c is a uppercase letter",a);
        else  if(islower(a))
        printf("\nthe entered character %c is a lowercase letter",a);
        else  if(isspace(a))
        printf("\nthe entered character %c is a blank space",a);
        else  if(ispunct(a))
        printf("\nthe entered character %c is a punctuation",a);
        else
        printf("\n not a character in list");
    }

    return 0;
}
