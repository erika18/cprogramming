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
NODE concat(NODE head1,NODE head2)
{
    NODE cur,temp;
    if(head1->rlink==NULL)
    {
        return(head2);
    }
    if(head2->rlink==NULL)
    {
        return(head1);
    }
    cur=head1->rlink;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    temp=head2->rlink;
    cur->rlink=temp;
    temp->llink=cur;
    freenode(head2);
    return(head1);
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
    NODE head1,head2;
    head1=getnode();
    head1->info=0;
    head1->rlink=head1->llink=NULL;
    head2=getnode();
    head2->info=0;
    head2->rlink=head2->llink=NULL;
    for( ; ; )
    {
      printf("\nEnter your choice\n1.Insert on list 1\n2.Insert on list 2\n3.Concatenate\n");
      printf("4.Display on list 1\n5.Display on list 2\n6.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:printf("Enter the data\n");
                 scanf("%d",&item);
                 head1=insert_front(item,head1);
                 break;
          case 2:printf("Enter the data\n");
                 scanf("%d",&item);
                 head2=insert_front(item,head2);
                 break;
          case 3:head1=concat(head1,head2);
                 break;
          case 4:display(head1);
                 break;
          case 5:display(head2);
                 break;
          case 6:exit(0);
      }
    }
    return 0;
}
