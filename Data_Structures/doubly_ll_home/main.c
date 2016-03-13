#include<stdio.h>
#include<stdlib.h>

# define NULL 0

struct node
{
int info;
struct node *left,*right;
};
typedef struct node *NODEPTR;

NODEPTR getnode();
void freenode(NODEPTR p);
void insert(NODEPTR *list,int x);
void insleft(NODEPTR *list,int x);
void deleft(NODEPTR *list,int x);
void display(NODEPTR *list);

void main()
{
	NODEPTR list;
	int op,ele;
	list=NULL;

	while(1)
	{

		printf("\n**** MENU *****\n");
printf("1.insert\n2.insert before an element\n3.delete\n4.display\n5.exit\n");
		printf("Enter your choice:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("enter the element\n");
				scanf("%d",&ele);
				insert(&list,ele);
				printf("success\n");

				break;
			case 2:
				printf("enter before which u want to insert\n");
				scanf("%d",&ele);
				insleft(&list,ele);
				printf("success\n");

				break;
			case 3:
				printf("enter the element to delete\n");
				scanf("%d",&ele);
				deleft(&list,ele);
				break;
			case 4:
				display(&list);
				break;
			case 5:
				exit(0);
		}
	}
}

void insert(NODEPTR *list,int x)
{
	NODEPTR p,q;
	q=*list;
	p=getnode();
	p->info=x;
	p->left=NULL;
	if(*list==NULL)
	{	p->right=NULL;
		*list=p;
	}
	else
	{	p->right= *list;
		q->left=p;
		*list=p;
	}
}


void insleft(NODEPTR *list,int x)
{
	NODEPTR p,q,r,s,t;
	int ele,count=0;
	s=*list;
	printf("enter the element\n");
	scanf("%d",&ele);
	if(s->info==x)
	{       q=getnode();
		q->info=ele;
		insert(list,ele);
		return;
	}
	for(p=*list;p!=NULL;p=p->right)
	if(p->info==x)
	{
		q=getnode();
		q->info=ele;
		p->left->right=q;
		q->right=p;
		q->left=p->left;
		p->left=q;
		count=1;
		break;
	}
	if(!count)
	{
		printf("element not found\n");
		getch();
		return;
	}
}

void deleft(NODEPTR *list,int ele)
{
	NODEPTR p,q,r;
	int count=0;
	p= *list;
	if(p->info==ele)
	{
		p=p->right;
		q=*list;
		*list=p;
		freenode(q);
		count=1;
	}
	else
	{
		for(p= *list;p!=NULL;p=p->right)
		if(p->info==ele)
		{
			q=p->right;
			r=p->left;
			r->right=p->right;
			q->left=p->left;
			freenode(p);
			count=1;
		}
	}
	if(!count)
	{
		printf("element not found\n");

		return;
	}
	else
	{
		printf("deleted\n");

		return;
	}
}


void display(NODEPTR *list)
{
	NODEPTR p;
	for(p= *list;p!=NULL;p=p->right)
		printf("%d\t",p->info);

}








NODEPTR getnode()
{
	NODEPTR p;
	p=(NODEPTR)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("overflow\n");

		return(0);
	}
	return(p);
}



void freenode(NODEPTR p)
{
	free(p);
}


