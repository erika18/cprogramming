#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct queue
{
    int item[MAX];
    int front;
    int rear;
};
void qinsert(struct queue *pq,int x)
{
    if(pq->rear==MAX-1)
    {
        printf("\nqueue overflow");
        return;
    }
    pq->rear=pq->rear+1;
    pq->item[pq->rear]=x;
    if(pq->front==-1)
       pq->front=0;
}
int qdelete(struct queue *pq)
{
    int temp;
    if(pq->front==-1)
    {
        printf("\nunderflow");
        return;
    }
    temp=pq->item[pq->front];
    if(pq->front==pq->rear)
    {
        pq->front=-1;
        pq->rear=-1;
    }
    else
       pq->front++;
       return temp;
}

void qdisplay(struct queue *pq)
{
    int i;
    printf("\ncontents of queue");
    for(i=pq->front;i<=pq->rear;i++)
    {
        printf("\n%d",pq->item[i]);
    }
}
int main()
{
    int ch,x,y;
    struct queue q;
    q.front=-1;
    q.rear=-1;
    for(;;)
    {
        printf("\nenter your choice ");
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nenter item to b inserted");
                    scanf("%d",&x);
                    qinsert(&q,x);
                    break;
            case 2: y=qdelete(&q);
                    printf("\nelt deleted %d",y);
                    break;
            case 3: qdisplay(&q);
                    break;
            case 4: exit (0);

        }
    }
    return 0;
}
