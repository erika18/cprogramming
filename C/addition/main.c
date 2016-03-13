#include <stdio.h>
#include <stdlib.h>

int main()
{
  float container1,container2,container3;
  printf("enter first number\n");
  scanf("%f",&container1);
  printf("enter second number\n");
  scanf("%f",&container2);
  container3=container1+container2;
  printf("the sum of two numbers is %f",container3);
  return 0;
}
