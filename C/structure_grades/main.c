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
    int phy;
    int cad;
    int chem;
};
typedef struct std STUDENT;

int main()
{
    STUDENT data[100];
    char ch[20];
    float avg;
    int k,i=0;
    while(1)
    {
        printf("enter roll_no\n");
        scanf("%d",&data[i].roll_no);
        printf("enter students name\n");
        scanf("%s",data[i].name);
        fflush(stdin);
        printf("enter marks in hindi\n");
        scanf("%d",&data[i].hindi);
        fflush(stdin);
        printf("enter marks in cse\n");
        scanf("%d",&data[i].cse);
         printf("enter marks in maths\n");
        scanf("%d",&data[i].maths);
         printf("enter marks in physics\n");
        scanf("%d",&data[i].phy);
         printf("enter marks in cad\n");
        scanf("%d",&data[i].cad);
         printf("enter marks in chem\n");
        scanf("%d",&data[i].chem);
         fflush(stdin);
         avg=(data[i].hindi+data[i].cse+data[i].maths+data[i].phy+data[i].cad+data[i].chem)/6;
         printf("grade is ");
         if(avg<=39)
    printf("F");
    else if(avg<=49)
    printf("E");
    else if(avg<=59)
    printf("D");
    else if(avg<=69)
    printf("C");
    else if(avg<=79)
    printf("B");
    else if(avg<=89)
    printf("A");
    else
    printf("S");
        printf("\ndo you want to enter next record\n");
        scanf("%s",ch);
        i++;
       if(strcmp(ch,"n")==0)
        break;
    }
    printf("\n\t\tSTUDENTS DATABASE\n");
    printf("\t\t_____________________\n\n");
    printf("ROLL_NO\tNAME\tMARKS OF SUBJECTS\n");
        printf("\t       \tHINDI\tCSE\tMATHS\tPHYSICS\tCAD\tCHEM");
    for(k=0;k<i;k++)
    {
      printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",data[k].roll_no,data[k].name,data[k].hindi,data[k].cse,data[k].maths,data[k].phy,data[k].cad,data[k].chem);
    }

    return 0;
}
