#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a,i,j=0;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a==0||a==1)
    printf("the given number is neither prime nor composite");
    else
  {
       for(i=2;i<=(sqrt(a));i++)
    {
        if(a%i==0)
        j++;
    }

    if(j==0)
      printf("the number is prime");
    else
      printf("the number is composite number");
  }

    return 0;
}
