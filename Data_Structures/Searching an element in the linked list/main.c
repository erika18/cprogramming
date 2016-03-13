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
NODE insert_front(int item,NODE first)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return(temp);
}
void search(int key,NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp=first;
    while(temp!=NULL && key!=temp->info)
    {
       temp=temp->link;
    }
    if(temp==NULL)
      printf("Search unsuccessful\n");
    else
      printf("Search successful\n");
    return;
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
    int choice,item,key;
    NODE first=NULL;
    for( ; ; )
    {
      printf("\nEnter your choice\n1.Insert_front\n2.Search\n3.Display\n4.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:printf("Enter the data\n");
                 scanf("%d",&item);
                 first=insert_front(item,first);
                 break;
          case 2:printf("Enter the item to be searched\n");
                 scanf("%d",&key);
                 search(key,first);
                 break;
          case 3:display(first);
                 break;
          case 4:exit(0);
      }
    }
    return 0;
}
