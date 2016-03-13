#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
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
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=head->link;
    head->link=temp;
    return(head);
}
NODE insert_rear(int item,NODE head)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    cur=head->link;
    while(cur->link!=head)
    {
        cur=cur->link;
    }
    temp->link=head;
    cur->link=temp;
    return(head);
}
NODE delete_front(NODE head)
{
    NODE cur,temp;
    if(head->link==head)
    {
        printf("List is empty\n");
        return(head);
    }
    temp=head->link;
    cur=temp->link;
    printf("Deleted data is %d",temp->info);
    freenode(temp);
    head->link=cur;
    return(head);
}
NODE delete_rear(NODE head)
{
    NODE temp,prev;
    if(head->link==head)
    {
        printf("List is empty\n");
        return(head);
    }
    prev=head;
    temp=head->link;
    while(temp->link!=head)
    {
        prev=temp;
        temp=temp->link;
    }
    prev->link=temp->link;
    printf("Deleted data is %d\n",temp->info);
    freenode(temp);
    return(head);
}
void display(NODE head)
{
    NODE temp;
    if(head->link==head)
    {
        printf("List is empty\n");
        return;
    }
    printf("Contents of the Circular Linked list are\n");
    temp=head->link;
    while(temp!=head)
    {
        printf("%d\t",temp->info);
        temp=temp->link;
    }
}
int main()
{
    int choice,item;
    NODE head;
    head=getnode();
    head->info=0;
    head->link=head;
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
