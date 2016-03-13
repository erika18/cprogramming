#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float area;
    int l,b,h,r;
    char choice;
    printf("'c'=circle\n't'=triangle\n'r'=rectangle");
    printf("\nenter the choice\n");
    scanf("%c",&choice);
    switch(tolower(choice))
    {
        case 'c': printf("enter the radius\n");
                  scanf("%d",&r);
                  area=3.14*r*r;
                  printf("the area of circle is %f",area);
                  break;
        case 't': printf("enter the base and height\n");
                  scanf("%d %d",&b,&h);
                  area=0.5*b*h;
                  printf("the area of triangle is %f",area);
                  break;
        case 'r': printf("enter the length and breadth\n");
                  scanf("%d %d",&l,&b);
                  area=l*b;
                  printf("the area of rectangle is %f",area);
                  break;
       default : printf("invalid choice");
    }
    return 0;
}
