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
NODE insert(int item,NODE first)
{
    NODE temp,prev,cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
     return(temp);
    if(item<first->info)
    {
        temp->link=first;
        return(temp);
    }
    prev=NULL;
    cur=first;
    while(cur!=NULL && item>cur->info)
    {
        prev=cur;
        cur=cur->link;
    }
    prev->link=temp;
    temp->link=cur;
    return(first);
}
NODE delete_front(NODE first)
{
    NODE temp;
    if(first==NULL)
     {
         printf("List is empty\n");
         return(first);
     }
     temp=first;
     temp=temp->link;
     printf("Deleted data is %d\n",first->info);
     freenode(first);
     return(temp);
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
    for( ; ; )
    {
      printf("\nEnter your choice\n1.Insert\n2.Delete_front\n3.Display\n4.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:printf("Enter the data\n");
                 scanf("%d",&item);
                 first=insert(item,first);
                 break;
          case 2:first=delete_front(first);
                 break;
          case 3:display(first);
                 break;
          case 4:exit(0);
      }
    }
    return 0;
}
