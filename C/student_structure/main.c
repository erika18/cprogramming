#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
struct std
{
    int roll_no;
    char name[20];
    int hindi;
    int cse;
    int maths;
};
typedef struct std STUDENT;

int main()
{
    STUDENT data;
        printf("enter roll_no\n");
        scanf("%d",&data.roll_no);
        printf("enter students name\n");
        scanf("%s",data.name);
        fflush(stdin);
        printf("enter marks in hindi\n");
        scanf("%d",&data.hindi);
        fflush(stdin);
        printf("enter marks in cse\n");
        scanf("%d",&data.cse);
        fflush(stdin);
        printf("enter marks in maths\n");
        scanf("%d",&data.maths);
        printf("\tROLL_NO\tNAME\tMARKSOF SUBJECTS\n");
        printf("\t       \t    \tHINDI\tCSE\tMATHS\n");
        printf("\t%d\t%s\t%d\t%d\t%d\n",data.roll_no,data.name,data.hindi,data.cse,data.maths);
  return 0;
}
