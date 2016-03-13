#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float a,b,c;
    printf("enter two numbers\n");
    scanf("%f %f",&a,&b);
    printf("\n 1:addition\n 2:subtraction\n 3:multiplication\n 4:division\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: c=a+b;
                printf("the sum is %f",c);
                break;
        case 2: c=a-b;
                printf("the difference is %f",c);
                break;
        case 3: c=a*b;
                printf("the product is %f",c);
                break;
        case 4: if(b==0)
                 {
                  printf("syntax error");
                  break;
                 }
                else
                {
                 c=a/b;
                 printf("the quotient is %f",c);
                break;
                }

        default: printf("wrong choice");
    }
    return 0;
}
