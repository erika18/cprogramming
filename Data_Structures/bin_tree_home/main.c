#include<stdio.h>

# define NULL 0

struct node
{
	int info;
	struct node *left,*right;
};
typedef struct node *NODEPTR;

NODEPTR maketree (int x);
NODEPTR getnode();
void setleft(NODEPTR p,int x);
void setright(NODEPTR p,int x);
void inorder(NODEPTR p);
void postorder(NODEPTR p);
void preorder(NODEPTR p);


void main()
{	NODEPTR p,q,root;
	int x,op1,op;
	root=NULL;
	p=NULL;
	q=NULL;

	while(1)
	{     printf("\n***** MENU  *****\n");
		printf("\n1 Insert\n2 Traverse\n3 Exit\n");
		scanf("%d",&op);
		switch(op)
		{	case 1:
				printf("Enter the number and  at last press ctrl+z\n");
				scanf("%d",&x);
				root=maketree(x);
				while(scanf("%d",&x)!=EOF)
				{
					p=q=root;
					while(x!=p->info&&q!=NULL)
					{
						p=q;
						if(x<p->info)
							q=p->left;
						else
							q=p->right;
					}
					if(x==p->info)
						printf("Duplicate element %d\n",x);
					else
					if(x<p->info)
						setleft(p,x);
					else
						setright(p,x);
				}
				break;
			case 2:
				printf("---------------\n");
				printf("TRAVERSE IN :\n");
				printf("1 inorder\n2 postorder\n3 preorder\n");
				printf("Select your choice:");
				scanf("%d",&op1);
				if(op1==1)
					inorder(root);
				if(op1==2)
					postorder(root);
				if(op1==3)
					preorder(root);
				break;
			case 3:
				exit(0);
		}
	}
}


NODEPTR maketree(int x)
{
	NODEPTR p;
	p=getnode();
	p->info=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}

void setleft(NODEPTR p,int x)
{
	if(p==NULL)
		printf("void insert\n");
	else
	if(p->left!=NULL)
		printf("invalid insertion\n");
	else
		p->left=maketree(x);
}


void setright(NODEPTR p,int x)
{
	if(p==NULL)
	printf("void insert\n");
	else if(p->right!=NULL)
		printf("invalid insertion\n");
	else
		p->right=maketree(x);
}






void inorder(NODEPTR p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d\t",p->info);
		inorder(p->right);
	}
}

void postorder(NODEPTR p)
{
	if(p!=NULL)
	{
		postorder(p->left);
		postorder(p->right);
		printf("%d\t",p->info);
	}
}

void preorder(NODEPTR p)
{
	if(p!=NULL)
	{
		printf("%d\t",p->info);
		preorder(p->left);
		preorder(p->right);
	}
}

NODEPTR getnode()
{
	NODEPTR p;
	p=(NODEPTR)malloc (sizeof(struct node));
	return p;
}


