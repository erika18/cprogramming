#include <stdio.h>
#include <stdlib.h>

int main()
{
   void swap_ref(int *x,int *y);
   void swap_val(int x,int y);
   int m,n;
    printf("enter two numbers\n");
    scanf("%d %d",&m,&n);
    printf("the numbers before swapping is %d and %d\n",m,n);
    swap_val(m,n);
    printf("the number after swapping by value is %d and %d\n",m,n);
    swap_ref(&m,&n);
    printf("the number after swapping by reference is %d and %d",m,n);
    return 0;
}

    void swap_val(int x,int y)
    {
        int k;
        k=x;
        x=y;
        y=k;
    }

     void swap_ref(int *x,int *y)
    {
        int z;
        z=*x;
        *x=*y;
        *y=z;
    }
