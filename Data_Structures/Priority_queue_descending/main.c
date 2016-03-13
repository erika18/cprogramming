#include <stdio.h>
#include <stdlib.h>
#define max 50
int q[max];
int top=-1;
void qinsrt(int x)
{   if(top==max-1)
     {
         printf("overflow condtn");
         return;
     }
    q[++top]=x;
}
int qdlt()
{
    if(top==-1)
    {
        printf("under flow");
        return;
    }
    int i,j,pos;
    int temp;
    temp=q[0];
    for(i=1;i<=top;i++)
    if(q[i]>temp)
    { temp=q[i];
      pos=i;
    }
    for(j=pos;j<=top;j++)
    q[j]=q[j+1];
    top--;
    return temp;
}
void qdisply()
{
    if(top==-1)
    {
        printf("\nQueue Empty");
        return;
    }
    int i;
    for(i=0;i<=top;i++)
    printf("%d\t",q[i]);
}
int main()
{
    int x,y,opt;
    for(;;)
    {
        printf("\nEnter ur choice\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                   printf("\nEnter element\n");
                   scanf("%d",&x);
                    qinsrt(x);
                    break;
            case 2:y=qdlt();
                   printf("\nDeleted element is%d\n",y);
                     break;
            case 3:qdisply();
                   break;
            case 4:exit(0);
        }
    }
    return 0;
}

