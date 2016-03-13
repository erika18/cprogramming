#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int ch,l;
    char s1[20],s2[20],s3[20],s4[20];
      printf("enter 1st string\n");
    gets(s1);
     printf("enter 2nd string\n");
    gets(s2);
      strcpy(s3,s1);
    strcpy(s4,s2);
    printf("1=copy\n 2=compare\n 3=concatination\n 4=lentgh\n 5=no  string operation\n");
    do
    {
        strcpy(s1,s3);
        strcpy(s2,s4);
    printf("\nenter your option\n ");
    scanf("%d",&ch);
          switch(ch)
    {
        case 1: printf("copy 1st string to 2nd\n");
                     strcpy(s2,s1);
                      printf("result of copyng is= %s",s3);
                      break;

        case 2: printf("comparing of 1st string to 2nd\n");
                   l= strcmp(s2,s1);
                   if(l==0)
                    printf("both  strings are same \n");
                     else
                     printf("both strings are not same\n");
                     break;

          case 3: printf("concatenation of 1st string to 2nd\n");
                    strcat(s2,s1);
                     printf("\nresult of concatenation is =%s",s2);
                     break;
          case 4: printf("lentgh of 1st string and 2nd\n");
                   l= strlen(s1);
                    printf("lentgh of s1 is=%d\n",l);
                    l=strlen(s2);
                    printf("lentgh of s2 is=%d",l);
                     break;
    case  5:printf("quit");
               break;
            default:printf("invalid entry\n");
                        break;
    }
    }
    while(ch!=5);
    return 0;
}
