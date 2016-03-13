#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node *NODEPTR;
struct queue
{
    NODEPTR front,rear;
};
struct queue q;
int empty(struct queue *);
void insert(struct queue *,int);
void display(struct queue *);
int qremove(struct queue *);
int main()
{
    NODEPTR list;
    int choice,x,rpt=1;
    while(rpt)
    {
        printf("1.to insert\n2.to remove\n3.to display\n4.to exit\n");
        printf("ntr ur choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nntr the value to insert\n");
            scanf("%d",&x);
            insert(&q,x);
            break;
            case 2:qremove(&q);
            break;
            case 3:display(&q);
            break;
            case 4:exit(0);
            break;
        }
        printf("do u want to continue?\n");
        printf("if yes ntr 1otherwise 0:");
        scanf("%d",&rpt);
    }
    return 0;
}
int empty(struct queue *pq)
{
    if(pq->front==NULL)
    return(1);
    else
    return(0);
}
void insert(struct queue *pq, int x)
{
    NODEPTR p;
    p=(NODEPTR)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("no node is available\n");
    }
    p->info=x;
    p->next=NULL;
    if(pq->rear==NULL)
    {
        pq->front=p;
    }
    else
    (pq->rear)->next=p;
    pq->rear=p;
}
int qremove(struct queue *pq)
{
    int x;
     NODEPTR p;
     if(empty(pq))
     {
     printf("q undrflow\n");
     return 0;
     }

     p=pq->front;
     x=p->info;
     printf("removed item is %d",x);
     pq->front=p->next;
     if(pq->rear=NULL)
     {

     pq->rear=NULL;
     free(p);
     }
     return 0;
}
void display(struct queue *pq)
{
    NODEPTR p;
    p=pq->front;
    if(empty(pq))
    {
        printf("q is empty\n");
        return;
    }
    for(p=pq->front;p!=(pq->rear)->next;p=p->next)
    printf("%d\t",p->info);
}
