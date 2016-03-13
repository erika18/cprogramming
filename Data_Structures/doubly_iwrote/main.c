#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left;
    struct node *right;
};

typedef struct node *NODE;

NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("out of memory");
        return;
    }
    return x;
}

void freenode(NODE x)
{
    free(x);
}

NODE insfront(int item,NODE first)
{
    NODE q;
    q=getnode();
    q->info=item;
    q->left=NULL;
    q->right=NULL;
    if(first==NULL)
    return q;
    q->right=first;
    //p=first;
    first->left=q;
    return q;
}

NODE insrear(int item,NODE first)
{
    NODE q,p;
    q=getnode();
    q->info=item;
    q->left=NULL;
    q->right=NULL;
    if(first==NULL)
    return q;
    p=first;
    while(p->right!=NULL)
    {
        p=p->right;
    }
    p->right=q;
    q->left=p;
    return first;
}

NODE insbefore(int item,NODE first,int val)
{
    NODE q,p,r;
    q=getnode();
    q->info=item;
    q->left=NULL;
    q->right=NULL;
    if(first==NULL)
    {
        printf("void insertion");
        return;
    }
    p=first;
    while(p->info!=val)
    {
        p=p->right;
    }
    r=p->left;
    r->right=q;
    q->left=r;
    q->right=p;
    p->left=q;
    return first;
}

NODE insafter(int item,NODE first,int val)
{
    NODE q,p,r;
    q=getnode();
    q->info=item;
    q->left=NULL;
    q->right=NULL;
    if(first==NULL)
    {
        printf("void insertion");
        return;
    }
    p=first;
    while(p->info!=val)
    {
        p=p->right;
    }
    r=p->right;
     p->right=q;
     q->left=p;
     q->right=r;
    r->left=q;



    return first;
}

NODE delp(int val,NODE first)
{
    NODE q,r,p;
    if(first==NULL)
    {
        printf("void deletion");
         return;
    }

    p=first;
    while(p->info!=val)
    {
        p=p->right;
    }
    r=p->right;
    q=p->left;
    q->right=r;
    r->left=q;
    freenode(p);
    return first;
}

NODE delright(int val,NODE first)
{
     NODE q,r,p;
    if(first==NULL)
    {
        printf("void deletion");
         return;
    }
  // if(first->right==NULL)
    {
      //  printf("deleted elt %d",first->info);
       // freenode(first);
       // return;
    }
    p=first;
    while(p->info!=val)
    {
        p=p->right;
    }
    q=p->right;
    r=q->right;
    p->right=r;
    r->left=p;
    freenode(q);
    return first;
}

NODE delleft(int val,NODE first)
{
     NODE q,r,p;
    if(first==NULL)
    {
        printf("void deletion");
         return;
    }
   // if(first->right==NULL)
    {
    //    printf("deleted elt %d",first->info);
    //    freenode(first);
     //   return;
    }
    p=first;
    while(p->info!=val)
    {
        p=p->right;
    }
    q=p->left;
    r=q->left;
    r->right=p;
    p->left=r;
    freenode(q);
    return first;
}

NODE delfront(NODE first)
{
     NODE p;
    if(first==NULL)
    {
        printf("void deletion");
         return;
    }
    if(first->right==NULL)
    {
        printf("deleted elt %d",first->info);
        freenode(first);
        return;
    }
    p=first->right;
    p->left=NULL;
    freenode(first);
    return p;
}

NODE delrear(NODE first)
{
     NODE q,p;
    if(first==NULL)
    {
        printf("void deletion");
         return;
    }
    if(first->right==NULL)
    {
        printf("deleted elt %d",first->info);
        freenode(first);
        return;
    }
    p=first;
    while(p->right!=NULL)
    {
        p=p->right;
    }
    q=p->left;
    q->right=NULL;
    freenode(p);
    return first;
}

void display(NODE first)
{
    NODE p;
    if(first==NULL)
    {
        printf("empty");
        return;
    }

    p=first;

    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->right;
    }
    return;
}

int main()
{
    int item,ch,val;
    NODE first;

    first=NULL;
   // first->left=NULL;
   // first->right=NULL;

    for(;;)
    {
        printf("\nenter choice\n1.insfront\n2.insrear\n3.insb4\n4.insafter\n5.delp\n6.delright\n7.delleft\n8.delfront\n9.delrear\n10.display\n11.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter elt to insert");
            scanf("%d",&item);
            first=insfront(item,first);
            break;
            case 2:
            printf("enter elt to insert");
            scanf("%d",&item);
            first=insrear(item,first);
            break;
            case 3:
            printf("enter elt to insert and value");
            scanf("%d%d",&item,&val);
            first=insbefore(item,first,val);
            break;
            case 4:
            printf("enter elt to insert and value");
            scanf("%d%d",&item,&val);
            first=insafter(item,first,val);
            break;
            case 5:
            printf("enter elt to delete");
            scanf("%d",&item);
            first=delp(item,first);
            break;
            case 6:
            printf("enter val to delete");
            scanf("%d",&item);
            first=delright(item,first);
            break;
            case 7:
            printf("enter val to delete");
            scanf("%d",&item);
            first=delleft(item,first);
            break;
            case 8:

            first=delfront(first);
            break;
            case 9:
            first=delrear(first);
            break;
            case 10:
            display(first);
            break;
            case 11:
            exit(0);
        }
    }
return 0;
}
