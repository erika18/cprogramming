#include <stdio.h>
#include <stdlib.h>
#define size 10
void delete_front(int q[5],int *front,int *rear)
{
    if(*rear==-1||*front>*rear)
       printf("queue is empty");
    else
    {
        printf("deleted elt is %d",q[*front]);
        *front=*front+1;
    }
}
void insert_item(int item,int q[5],int *r)
{
    int j;
    if(*r==size-1)
    {
        printf("full");
    }
    else
    {
        j=*r;
       while(j>=0&&item<q[j])
       {
           q[j+1]=q[j];
           j--;
       }
       q[j+1]=item;
       *r=*r+1;
    }
}
void display(int q[5],int f,int r)
{
    int i;
    if(r==-1||f>r)
       printf("empty");
    else
    {
        printf("contents of q");
        {
            for(i=0;i<r;i++)
                printf("%d\n",q[i]);
        }
    }
}
void main()
{
    int choice,item,f,r,q[10];
    f=0;
    r=-1;
    for(;;)
    {
        printf("\n1.insert  2.delete  3.display  4.exit\nenter choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nentr item to b insrtd");
                    scanf("%d",&item);
                    insert_item(item,q,&r);
                    break;
            case 2: delete_front(q,&f,&r);
                    break;
            case 3: display(q,f,r);
                    break;
            default: exit(0);
        }


    }

}
