#include <stdio.h>
#include <stdlib.h>

#define max 5

struct queue
{
          int items[max],front,rear;
};

void insert(struct queue *q, int itm)
{
          if(q->rear==max-1)
          printf("Queue is full\n");
          else
          {
                q->rear++;
                q->items[q->rear]=itm;
          }
}

void deleteq(struct queue *q)
{
          if((q->front)>(q->rear))
          printf("Queue is empty\n");
          else
          {
                    printf("%d is deleted\n",q->items[q->front]);
                    q->front++;
          }
}

void display(struct queue *q)
{
          if((q->front)>(q->rear))
          printf("Queue is empty\n");
          else
          {
                    int i;
                    for(i=q->front;i<=q->rear;i++)
                    printf("%d\t",q->items[i]);
                    printf("\n");
          }
}

int main()
{
    struct queue q;
    int ch,ele;
    q.front=0;
    q.rear=-1;
    for(;;)
    {
              printf("\nMENU\n1=insert\t2=delete\t3=display\t4=exit");
              printf("\nEnter your choice: ");
              scanf("%d",&ch);
              switch(ch)
              {
                        case 1:printf("Enter element to be inserted: ");
                               scanf("%d",&ele);
                               insert(&q,ele);
                               break;
                        case 2:deleteq(&q);
                               break;
                        case 3:printf("Queue contents are:\n");
                               display(&q);
                               break;
                        case 4:exit(0);
                        default:printf("Invalid statement\n");
              }
    }
    return 0;
}
