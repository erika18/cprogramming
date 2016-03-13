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
NODE insert_rear(int item,NODE first)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
    {
        return(temp);
    }
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return(first);
}
NODE concat(NODE first,NODE sec)
{
    NODE temp;
    if(first==NULL)
    {
        return(sec);
    }
    if(sec==NULL)
    {
        return(first);
    }
    temp=first;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=sec;
    return(first);
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Contents of the Linked list are\n");
    temp=first;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->link;
    }
}
int main()
{
    int choice,item;
    NODE first=NULL;
    NODE sec=NULL;
    for( ; ; )
    {
      printf("\nEnter your choice\n1.Insert on list 1\n2.Insert on list 2\n3.Concatenate\n4.Display on list 1\n5.Display on list 2\n6.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:printf("Enter the data\n");
                 scanf("%d",&item);
                 first=insert_rear(item,first);
                 break;
          case 2:printf("Enter the data\n");
                 scanf("%d",&item);
                 sec=insert_rear(item,sec);
                 break;
          case 3:first=concat(first,sec);
                 break;
          case 4:display(first);
                 break;
          case 5:display(sec);
                 break;
          case 6:exit(0);
      }
    }
    return 0;
}
