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
    if(head->rlink==NULL)
    {
      head->rlink=temp;
      temp->llink=head;
      temp->rlink=NULL;
      return(head);
    }
    cur=head->rlink;
    temp->llink=head;
    temp->rlink=cur;
    head->rlink=temp;
    cur->llink=temp;
    return(head);
}
NODE insert_rear(int item,NODE head)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    if(head->rlink==NULL)
    {
      head->rlink=temp;
      temp->llink=head;
      temp->rlink=NULL;
      return(head);
    }
    cur=head->rlink;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    temp->llink=cur;
    temp->rlink=NULL;
    cur->rlink=temp;
    return(head);
}
NODE delete_front(NODE head)
{
    NODE cur,temp;
    if(head->rlink==NULL)
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
    if(head->rlink==NULL)
    {
        printf("List is empty\n");
        return(head);
    }
    cur=head->rlink;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    prev=cur->llink;
    prev->rlink=NULL;
    printf("%d deleted\n",cur->info);
    freenode(cur);
    return(head);
}
void display(NODE head)
{
    NODE cur;
    if(head->rlink==NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Contents of the Doubly Linked list are\n");
    cur=head->rlink;
    while(cur!=NULL)
    {
        printf("%d\t",cur->info);
        cur=cur->rlink;
    }
}
int main()
{
    int choice,item;
    NODE head;
    head=getnode();
    head->info=0;
    head->rlink=NULL;
    head->llink=NULL;
    for( ; ; )
    {
      printf("\nEnter your choice\n1.Insert_front\n2.Insert_rear\n3.Delete_front\n");
      printf("4.Delete_rear\n5.Display\n6.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:printf("Enter the data\n");
                 scanf("%d",&item);
                 head=insert_front(item,head);
                 break;
          case 2:printf("Enter the data\n");
                 scanf("%d",&item);
                 head=insert_rear(item,head);
                 break;
          case 3:head=delete_front(head);
                 break;
          case 4:head=delete_rear(head);
                 break;
          case 5:display(head);
                 break;
          case 6:exit(0);
      }
    }
    return 0;
}
