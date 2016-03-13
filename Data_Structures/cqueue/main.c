#include <stdio.h>
#include <stdlib.h>

#define max 3

struct queue
{
          int items[max],front,rear,count;
};

void insert(struct queue *q, int itm)
{
          if(q->count==max)
          printf("Queue is full\n");
          else
          {
                q->rear=(q->rear+1)%max;
                q->items[q->rear]=itm;
                q->count++;
          }
}

void deleteq(struct queue *q)
{
          if(q->count==0)
          printf("Queue is empty\n");
          else
          {
                    printf("%d is deleted\n",q->items[q->front]);
                    q->front=(q->front+1)%max;
                    q->count--;
          }
}

void display(struct queue *q)
{
          if(q->count==0)
          printf("Queue is empty\n");
          else
          {
                    int i=q->front,j;
                    for(j=0;j<q->count;j++)
                    {
                              printf("%d\t",q->items[i]);
                              i=(i+1)%max;
                    }
                    printf("\n");
          }
}

int main()
{
    struct queue q;
    int ch,ele;
    q.front=0;
    q.rear=-1;
    q.count=0;
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
