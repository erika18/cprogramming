#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void qinsert(int item,int *r,int q[])
{
    if(*r==MAX-1)
    {
        printf("\nqueue overflow");
        return;
    }
    *r=*r+1;
    q[*r]=item;
}
void qdelete(int q[],int *f,int *r)
{
    if(*f>*r)
    {
        printf("\n queue underflow");
        return;
    }
    printf("\nelt deletd is %d \n",q[(*f)++]);
    if(*f>*r)
    {
        *f=0;
        *r=-1;
    }
}
void qdisplay(int q[],int f,int r)
{
    int i;
    if(f>r)
    {
        printf("\nqueue is empty\n");
        //return r;
    }
    printf("\ncontents of queue");
    for(i=f;i<=r;i++)
        printf("\n%d",q[i]);
}
int main()
{
    int ch,item,f,r,q[10];
    f=0;
    r=-1;
    for(;;)
    {

        printf("\nenter your choice ");
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nenter item to b inserted");
                    scanf("%d",&item);
                    qinsert(item,&r,q);
                    break;
            case 2: qdelete(q,&f,&r);
                    break;
            case 3: qdisplay(q,f,r);
                    break;
            case 4: exit (0);

        }
    }

    printf("\n");
    return 0;
}
