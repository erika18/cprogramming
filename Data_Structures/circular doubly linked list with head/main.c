#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};
 typedef struct node *NODE;
NODE getnode()
{
    NODE X;
    X=(NODE)malloc(sizeof(struct node));
    if(X==NULL)
    {
        printf("Memory not available\n");
    }
    return(X);
}
void freenode(NODE X)
{
    free(X);
}
NODE insert_front(int item,NODE head)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    cur=head->rlink;
    temp->llink=head;
    temp->rlink=cur;
    head->rlink=temp;
    cur->llink=temp;
    return(head);
}
NODE insert_rear(NODE head,int item)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    cur=head->llink;
    temp->llink=cur;
    temp->rlink=head;
    head->llink=temp;
    cur->rlink=temp;
    return(head);
}
NODE delete_front(NODE head)
{
    NODE cur,temp;
    if(head->rlink==head)
    {
        printf("List is empty\n");
        return(head);
    }
    cur=head->rlink;
    temp=cur->rlink;
    head->rlink=temp;
    temp->llink=head;
    printf("%d deleted\n",cur->info);
    freenode(cur);
    return(head);
}
NODE delete_rear(NODE head)
{
    NODE prev,cur;
    if(head->rlink==head)
    {
        printf("List is empty\n");
        return(head);
    }
    cur=head->llink;
    prev=cur->llink;
    head->llink=prev;
    prev->rlink=head;
    printf("%d deleted\n",cur->info);
    freenode(cur);
    return(head);
}
NODE insert_left(int key,NODE head)
{
    NODE temp,cur,prev;
    if(head->rlink==head)
    {
        printf("List is empty\n");
        return(head);
    }
    cur=head->rlink;
    while(cur!=head)
    {
        if(cur->info==key)
          break;
        cur=cur->rlink;
    } if(cur==head)
    {
        printf("KEY %d not found\n",key);
        return(head);
    }
    prev=cur->llink;
    printf("Enter the node\n");
    temp=getnode();
    scanf("%d",&temp->info);
    temp->llink=prev;
    prev->rlink=temp;
    temp->rlink=cur;
    cur->llink=temp;
    return(head);
}
NODE insert_right(int key,NODE head)
{
    NODE temp,cur,next;
    if(head->rlink==head)
    {
        printf("List is empty\n");
        return(head);
    }
    cur=head->rlink;
    while(cur!=head)
    {
        if(cur->info==key)
           break;
        cur=cur->rlink;
    }
    if(cur==head)
    {
        printf("KEY %d not found\n",key);
        return(head);
    }
    next=cur->rlink;
    printf("Enter a node\n");
    temp=getnode();
    scanf("%d",&temp->info);
    temp->llink=cur;
    temp->rlink=next;
    cur->rlink=temp;
    next->llink=temp;
    return(head);
}
void display(NODE head)
{
    NODE cur;
    if(head->rlink==head)
    {
        printf("List is empty\n");
        return;
    }
    printf("Contents of the Circular Doubly Linked list are\n");
    cur=head->rlink;
    while(cur!=head)
    {
        printf("%d\t",cur->info);
        cur=cur->rlink;
    }
}
int main()
{
    int choice,item,key;
    NODE head;
    head=getnode();
    head->info=0;
    head->rlink=head;
    head->llink=head;
    for( ; ; )
    {
      printf("\nEnter your choice\n1.Insert_front\n2.Insert_rear\n3.Delete_front\n");
      printf("4.Delete_rear\n5.Insert_left\n6.Insert_right\n7.Display\n8.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:printf("Enter the data\n");
                 scanf("%d",&item);
                 head=insert_front(item,head);
                 break;
          case 2:printf("Enter the data\n");
                 scanf("%d",&item);
                 head=insert_rear(head,item);
                 break;
          case 3:head=delete_front(head);
                 break;
          case 4:head=delete_rear(head);
                 break;
          case 5:printf("Enter the key\n");
                 scanf("%d",&key);
                 head=insert_left(key,head);
                 break;
          case 6:printf("Enter the key");
                 scanf("%d",&key);
                 head=insert_right(key,head);
                 break;
          case 7:display(head);
                 break;
          case 8:exit(0);
      }
    }
    return 0;
}
