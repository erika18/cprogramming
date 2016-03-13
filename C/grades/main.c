#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m;
    printf("enter the students marks\n");
    scanf("%f",&m);
    printf("\n the grades is ");
    if(m<=39)
    printf("F");
    else if(m<=49)
    printf("E");
    else if(m<=59)
    printf("D");
    else if(m<=69)
    printf("C");
    else if(m<=79)
    printf("B");
    else if(m<=89)
    printf("A");
    else
    printf("S");
    return 0;
}
