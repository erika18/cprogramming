#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dd1,mm1,yy1,dd2,mm2,yy2,dd,mm,yy;
    int no_of_loan,exp,exp2;
    float loan,loan1,loan2;
    printf("enter the number of loans taken\n");
    scanf("%d",&no_of_loan);
    exp=((no_of_loan>0)&&(no_of_loan<2)?(1):((no_of_loan==0)?(2):(3)));
    if(exp==2)
    goto lab;
    else if(exp==3)
    goto display;
    else
    {
        printf("enter the date when loan was taken\n");
        scanf("%d %d %d",&dd1,&mm1,&yy1);
        printf("enter todays date\n");
        scanf("%d %d %d",&dd2,&mm2,&yy2);
        if(yy1<yy2)
        {
            dd=dd1;
            dd1=dd2;
            dd2=dd;
            mm=mm1;
            mm1=mm2;
            mm2=mm;
            yy=yy1;
            yy1=yy2;
            yy2=yy;
        }
        if((yy1==yy2)&&(mm1<mm2))
        {
            dd=dd1;
            dd1=dd2;
            dd2=dd;
            mm=mm1;
            mm1=mm2;
            mm2=mm;
        }
        if((dd1<dd2)&&(mm1==mm2))
        {
            dd=dd2-dd1;
            mm=mm1-mm2;
            yy=yy1-yy2;
            printf("\n the difference between the date is %d days %d months and %d years\n",dd,mm,yy);
            goto test;
        }
        if(dd1<dd2)
        {
            dd1=dd1+30;
            mm=mm1-1;
        }
        dd1=dd1-dd2;
        if(mm1<mm2)
        {
            mm1=mm1+12;
            yy1=yy1-1;
        }
            dd=dd2-dd1;
            mm=mm1-mm2;
            yy=yy1-yy2;
        printf("\n the difference between the date is %d days %d months and %d years\n",dd,mm,yy);

         test:
         {
             exp2=((mm>=6)||(yy>0)?(1):(2));
             if(exp2==1)
             {
                 printf("the loan amount taken is \n");
                 scanf("%f",&loan1);
                 lab:
                      printf("enter the loan amount required\n");
                      scanf("%f",&loan2);
             }
             loan=loan1+loan2;

        }
    }
    exp=(loan>50000)?(1):(2);
    if(exp==2)
    printf("loan sanctioned");
    else
    display: printf("loan not sanctioned");
    return 0;
}
