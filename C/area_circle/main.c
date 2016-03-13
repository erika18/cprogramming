#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area,radius,pi=3.14;
    printf("enter the radius \n");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the area of circle is %f",area);
    return 0;
}
