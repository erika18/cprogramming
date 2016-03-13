#include <stdio.h>
#include <stdlib.h>

#define max 5

struct queue
{
          int items[max],front,rear;
};

void insert(struct queue *pq, int itm)
{
          if(pq->rear==max-1)
          printf("Queue is full\n");
          else
          {
                int j=pq->rear;
                while((j>=pq->front)&&(pq->items[j]>itm))
                {
                     pq->items[j+1]=pq->items[j];
                     j--;
                }
                pq->items[j+1]=itm;
                pq->rear++;
          }
}

void deleteq(struct queue *pq)
{
          if((pq->front)>(pq->rear))
          printf("Queue is empty\n");
          else
          {
                    printf("%d is deleted\n",pq->items[pq->front]);
                    pq->front++;
          }
}

void display(struct queue *pq)
{
          if((pq->front)>(pq->rear))
          printf("Queue is empty\n");
          else
          {
                    int i;
                    for(i=pq->front;i<=pq->rear;i++)
                    printf("%d\t",pq->items[i]);
                    printf("\n");
          }
}

int main()
{
    struct queue pq;
    int ch,ele;
    pq.front=0;
    pq.rear=-1;
    for(;;)
    {
              printf("\nMENU\n1=insert\t2=delete\t3=display\t4=exit");
              printf("\nEnter your choice: ");
              scanf("%d",&ch);
              switch(ch)
              {
                        case 1:printf("Enter element to be inserted: ");
                               scanf("%d",&ele);
                               insert(&pq,ele);
                               break;
                        case 2:deleteq(&pq);
                               break;
                        case 3:printf("Queue contents are:\n");
                               display(&pq);
                               break;
                        case 4:exit(0);
                        default:printf("Invalid statement\n");
              }
    }
    return 0;
}
