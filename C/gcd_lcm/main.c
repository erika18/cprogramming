#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gcd,lcm,num1,num2,product;    //initialization
    printf("enter two numbers\n");
    scanf("%d %d",&num1,&num2);      //inputting two numbers
    product=num1*num2;               //product of two numbers
    while(num1!=num2)                //finding gcd
    {
        if(num1>num2)
        num1=num1-num2;
        else
        num2=num2-num1;
    }
    gcd=num1;
    printf("\nthe gcd of two numbers is %d",gcd);
    lcm=product/gcd;                              //finding lcm
    printf("\nthe lcm of two numbers is %d",lcm);
    return 0;
}
