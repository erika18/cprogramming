#include <stdio.h>
#include <stdlib.h>
#define size 3
int choice,item,front,rear,count,q[size];
void insertq()
{
    if(count==size)
    {
        printf("queue overflow");
        return;
    }
    rear=(rear+1)%size;
    q[rear]=item;
    count++;
}
int deleteq()
{
    int item;
    if(count==0)return-1;
    item=q[front];
    front=(front+1)%size;
    count-=1;
    return item;
}
void display()
{
    int i,j;
    if(count==0)
    {
        printf(" q is empty");
        return;
    }
    printf("contents of q");
    j=front;
    for(i=1;i<=count;i++)
    {
        printf("%d\n",q[j]);
        j=(j+1)%size;
    }
}

void main()
{

    front=0;
    rear=-1;
    count=0;
    for(;;)
    {
        printf("1.insert  2.delete  3.display  4.exit\nenter choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("entr item to b insrtd");
                    scanf("%d",&item);
                    insertq();
                    break;
            case 2: item=deleteq();
                    if(item==-1)
                    {
                        printf("q is empty");
                        break;
                    }
                    printf("item deleted %d\n",item);
                    break;
            case 3: display();
                    break;
            default: exit (0);
        }
    }

}
