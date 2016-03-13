#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
typedef struct node* NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("out of memory\n");
        exit(0);
    }
    return x;
}
void freenode(NODE x)
{
    free(x);
}
NODE insert_front(int item,NODE first)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return temp;
}
NODE insert_rear(int item,NODE first)
{
    NODE temp;
    NODE cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
    return temp;
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return first;
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("list is empty\n");
        return;
    }
    printf("the contents of singly linked list\n");
    temp=first;
    while(temp!=NULL)
    {
        printf("%d",temp->info);
        temp=temp->link;
        printf("\n");
    }
    printf("\n");
}
NODE delete_rear(NODE first)
{
    NODE temp;
    NODE prev;
    temp=first;
    prev=first;
    while(temp->link!=NULL)
    {
        prev=temp;
        temp=temp->link;
    }
    if(temp==NULL)
    {
        printf("node not found\n");
    }
    else
    {
        printf("\nitem deleted =%d\n",temp->info);
        prev->link=temp->link;
    }
    return prev;
}
NODE delete_front(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("list empty cannot delete\n");
        return first;
    }
    temp=first;
    temp=temp->link;
    printf("\nitem deleted =%d\n",first->info);
    freenode(first);
    return temp;
}
void main()
{
    NODE first=NULL;
    int ch,item;
    for(;;)
    {
        printf("\n1.insert_front\n2.insert_rear\n3.delete_front\n4.delete_rear\n5.display\n6.exit\n");
        printf("\nenter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nenter the elt 2 b inserted\n");
                   scanf("%d",&item);
                   first=insert_front(item,first);
                   break;
            case 2:printf("\nenter the elt 2 b insertd\n");
                   scanf("%d",&item);
                   first=insert_rear(item,first);
                   break;
            case 5:display(first);
                   break;
            case 3:first=delete_front(first);
                   break;
            case 4:first=delete_rear(first);
                   break;
            default: exit(0);
        }
    }
    return(0);
}
