#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    float a[20],average,sum;
    printf("enter the number of students\n");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {

        printf("\nstudent %d\n",j+1);
        printf("enter the students marks\n");
        for(i=0;i<6;i++)
        scanf("%f",&a[i]);
        printf("the marks of student is \n");
        for(i=0;i<6;i++)
        printf("%f\n",a[i]);
        sum=0;
        for(i=0;i<6;i++)
        sum=sum+a[i];
        printf("\nthe total marks is %f",sum);
        average=sum/6;
        printf("\nthe average marks is %f",average);
        printf("\nthe grade is ");
        if(average<40)
        printf("fail");
        else if(average<60)
        printf("second class");
        else if(average<80)
        printf("first class");
        else
        printf("outstanding");
    }

 return 0;
}
