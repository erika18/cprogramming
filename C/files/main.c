/*
# this program allows the user to enter data till new line is encountered.
# the contents are written to a file named input
# then it reads the content from the input file and writes it to output file
# finally it reads the content from the output file and displays the content on the output screen
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1,*f2;
    char c;

    printf("enter data\n");
    f1=fopen("input","w");
    while((c=getchar())!=EOF)
    {
        putc(c,f1);
    }
    fclose(f1);
    printf("data o/p\n");
    f1=fopen("input","r");
    f2=fopen("output","w");
    while((c=getc(f1))!=EOF)
    {
        putc(c,f2);

    }
    fclose(f1);
    fclose(f2);
    printf("copied contents are\n");
    f2=fopen("output","r");
    while((c=getc(f2))!=EOF)
    {
        printf("%c",c);
    }
    fclose(f2);

    return 0;
}
