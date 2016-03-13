#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *lchild;
    struct node *rchild;
};
typedef struct node * NODE;
NODE bs;
int height(NODE q)
{
    if(q==NULL)
    return -1;
    else return max(height(q->lchild),height(q->rchild))+1;
}
int max(int l,int r)
{
    if(l>r)
    return l;
    else
    return r;
}
void create(NODE *q,int val)
{
    if(*q==NULL)
    {
        *q=(struct node *)malloc(sizeof(struct node));
        (*q)->lchild=NULL;
        (*q)->rchild=NULL;
        (*q)->info=val;
    }
    else
    {
        if(val<(*q)->info)
            create((&(*q)->lchild),val);
        if(val>(*q)->info)
            create((&(*q)->rchild),val);
    }
}
int main()
{
    int i,n,h,num;
    bs=NULL;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    printf("Enter the value of nodes :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        create(&bs,num);
    }
    h=height(bs);
    printf("\nHeight of tree is %d.\n",h);
    return 0;
}
