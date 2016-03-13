
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int dd1,mm1,yy1,dd2,mm2,yy2,dd,mm,yy;
     printf("enter the first date\n");
        scanf("%d %d %d",&dd1,&mm1,&yy1);
        printf("enter second date\n");
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
            exit(0);
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
        return 0;
}
