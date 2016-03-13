#include <stdio.h>
#include <stdlib.h>
char a[20],b[20];
int i,n,m,len,x,flag;
int length(char *p)
{
    i=0;
    while(*p!='\0')
    {
        p++;
        i++;
    }
    return i;
}
void copy(char*pa,char*pb)
{
    while(*pb!='\0')
    {
        *pa=*pb;
        pb++;
        pa++;
    }
}
void concat(char *pa,char *pb)
{
    while(*pa!='\0')
    {
        pa++;
    }
    while (*pb!='\0')
    {
        *pa=*pb;
        pb++;
        pa++;
    }
    *pa='\0';
}
void reverse(char *pa,char *p)
{
    int len=0;
    while(*pa!='\0')
    {
        pa++;
        len++;
    }
    pa--;
    while(len!=0)
    {
        *p=*pa;
        pa--;
        p++;
        len--;
    }
    *p='\0';
}
int compare(char*pa,char *pb)
{
    int flag=0;
    while(*pa!='\0'||*pb!='\0')
    {
        if(*pa!=*pb)
        {
            flag=1;
            break;
        }
     pa++;
     pb++;
    }
    return flag;
}
int main()
{
    printf("Enter the string 1\n");
    gets(a);
    printf("Enter the string 2\n");
    gets(b);
    printf("Enter your option\n");
    printf("1:length\n2:copy\n3:concatenate\n5:compare\n4:reverse\n");
    scanf("%d",&n);
    do
    {

    switch(n)
    {
        case 1: m= length(a);
                printf("Length of the string is %d\n",m);
                break;
        case 2: copy(a,b);
                printf("The copied string is\n");
                puts(a);
                break;
        case 3: concat(a,b);
                printf("The concatenated string is\n");
                puts(a);
                break;
        case 4: reverse(a,b);
                printf("The reversed string is\n");
                puts(b);
                break;
        case 5: m=compare(a,b);
                if(x==0)
                {
                    printf("The strings are same\n");
                }
                else
                {
                    printf("The strings are not same\n");
                }
                break;
            default: printf("In correct option\n");

        }
    printf("Enter your option\n");
    printf("1:length\n2:copy\n3:concatenate\n5:compare\n4:reverse\n");
    scanf("%d",&n);
    }
    while(n<=5);
    return 0;
    }


