#include <stdio.h>

void tower(int n,char sp,char dp,char ap)
{
     if(n==1)
     {
          printf("Moving disk 1 from %c to %c\n",sp,dp);
          return;
     }
     tower(n-1,sp,ap,dp);
     printf("Moving disk %d from %c to %c\n",n,sp,dp);
     tower(n-1,ap,dp,sp);
}

int main()
{
    int n;
    printf("Enter number of disks\n");
    scanf("%d",&n);
    printf("Disk movements are:\n");
    tower(n,'s','d','a');
    return 0;
}
