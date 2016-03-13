#include <stdio.h>
#include <stdlib.h>

int main()
{
  int container1,container2,container3;
  printf("enter first number\n");
  scanf("%d",&container1);
  printf("enter second number\n");
  scanf("%d",&container2);
  container3=container1-container2;
  printf("the difference of two numbers is %d",container3);
  return 0;
}
