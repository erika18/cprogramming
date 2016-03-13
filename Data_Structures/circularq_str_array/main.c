#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 3

struct cqueue
{
	int item[size];
	int rear,front,count;
};

void cqinsert(struct cqueue *cq,int x);
void cqdelete(struct cqueue *cq);
void cqdisplay(struct cqueue *cq);

void main()
{
	struct cqueue cq;
	int c,n,x;

	cq.rear=-1;
	cq.front=-1;
	cq.count=0;

	while(1)
	{


		printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
		printf("Enter your choice :");
		scanf("%d",&c);
		switch(c)
		{
			case 1:printf("Enter the element to be inserted \n");
			       scanf("%d",&n);
			       cqinsert(&cq,n);
			       break;
			case 2:cqdelete (&cq);
			       break;
			case 3:cqdisplay(&cq);
			       break;
			case 4:exit(0);
			default:printf("wrong option\n");
				break;
		}
		getch();
	}
}




void cqinsert(struct cqueue *cq,int x)
{	if(cq->count==size)
	{	printf("QUEUE full\n");
		return;
	}
	cq->count++;
	cq->rear=(cq->rear+1)%size ;
	cq->item[cq->rear]=x;

}

void cqdelete(struct cqueue *cq)
{      	int x;
	if(cq->count==0)
	{
		printf("Empty Queue\n");
		getch();
	}
	cq->count--;
	cq->front=(cq->front+1)%size;
	x=cq->item[cq->front];
	printf("Deleted element=%d\n",x);
}


void cqdisplay(struct cqueue *cq)
{       int i,x,f;
	if(cq->count==0)
	{
		printf("QUEUE Empty !!!");
		getch();
		return;
	}
	f=cq->front;
	printf("Queue elements are:");
	for(i=0;i<cq->count;i++)
	{	f=(f+1)%size;
		x=cq->item[f];
		printf("%d\t",x);
	}
}
