#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
struct std
{
    int roll_no;
    char name[20];
    char branch[20];
    char sec[1];
};
typedef struct std STUDENT;

int main()
{
    STUDENT data[100];
    char ch[20];
    int k,i=0;
    while(1)
    {
        printf("enter roll_no\n");
        scanf("%d",&data[i].roll_no);
        printf("enter students name\n");
        scanf("%s",data[i].name);
        fflush(stdin);
        printf("enter students branch\n");
        scanf("%s",data[i].branch);
        fflush(stdin);
        printf("enter section\n");
        scanf("%s",data[i].sec);
         fflush(stdin);
        printf("do you want to enter next record\n");
        scanf("%s",ch);
        i++;
        if(strcmp(ch,"n")==0)
        break;
    }
    printf("\n\t\tNMAMIT STUDENTS DATABASE\n");
    printf("\t\t___________________________\n");
    printf("ROLL_NO\tNAME\tBRANCH\tSECTION\n");
    for(k=0;k<i;k++)
    {
        printf("%d\t%s\t%s\t%s\n",data[k].roll_no,data[k].name,data[k].branch,data[k].sec);
    }

    return 0;
}
