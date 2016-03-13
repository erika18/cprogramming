#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int reg_no;
    int marks[6];
    float result;
}s[50];


int main()
{
    int i=0,j=0,sum=0,n;


    printf("enter the num of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nENTER STUDENT'S DETAILS");
        printf("\n------------------------");
        printf("\nenter the name\n");
        scanf("%s",s[i].name);
        printf("enter reg num\n");
        scanf("%d",&s[i].reg_no);

        printf("enter marks in 6 sub\nmarks out of 100\n");

        for(j=0;j<6;j++)
        {
            scanf("%d",&s[i].marks[j]);

            sum=sum+s[i].marks[j];
        }
        s[i].result=sum/6.0;
        sum=0;
    }

    printf("\nSTUDENT DETAILS");
    printf("\n---------------");
    for(i=0;i<n;i++)
    {

        printf("\nstudent %d details\n",i+1);
        printf("\nname : %s",s[i].name);
        printf("\nreg num : %d",s[i].reg_no);
        printf("\nmarks in 6 subj\n");
        for(j=0;j<6;j++)
        {
            printf("%d\n",s[i].marks[j]);
        }
        printf("result : %f",s[i].result);
        printf("\n");

        if(s[i].result<=100&&s[i].result>=70)
        printf("\ndistinction");
        else if(s[i].result<=69&&s[i].result>=50)
        printf("\nfirst class");
        else if(s[i].result<=49&&s[i].result>=35)
        printf("\n second class");
        else
        printf("fail!!");
    }
    return 0;
}
