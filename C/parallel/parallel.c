#include<stdio.h>
#include "omp.h"
#define NUM_THREADS 4
main()
{
 int n,a[10],b[10],c[10],i;
 printf("enter the number of array elements");
 scanf("%d",&n);
 printf("enter the array elements of a");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter the array elements of b");
 for(i=0;i<n;i++)
  scanf("%d",&b[i]);
 omp_set_num_threads(NUM_THREADS);
 printf("%d threads max\n",omp_get_max_threads());


#pragma omp parallel for
for(i=0;i<n;i++)
{
 c[i]=a[i]+b[i];
}
printf("results\n");
for(i=0;i<n;i++)
printf("%d\t",c[i]);
printf("threads %d running \n",omp_get_thread_num());
return 0;
}
