#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%f%f%f",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("the largest of 3 numbers is %f",a);
    else if(b>c)
     printf("the largest of 3 numbers is %f",b);
     else
      printf("the largest of 3 numbers is %f",c);
    return 0;
}
