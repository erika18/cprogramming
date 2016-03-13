#include <stdio.h>
#include<string.h>

void main()
{
 int l,i=0,j=0,c=0;
 char a[50],b[50];
 printf("Enter main string\n");
 gets(a);
 printf("Enter sub string\n");
 gets(b);
 l=strlen(b);
 printf("Length is %d\n",l);
 while(a[i]!='\0')

{
    if(a[i]==b[j])
     { j++;
         if(j==l)
           c++;
     }
else j=0;
i++;
}
if(c==0)
 printf("Sub string not present\n");
else
printf("sub string is present %d times\n",c);
}
