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
NODE delete_info(int key,NODE first)
{
    NODE prev,cur;
    if(first==NULL)
    {
        printf("list is empty\n");
        return(NULL);
    }
    if(key==first->info)
    {
        printf("%d deleted\n",first->info);
        cur=first;
        cur=cur->link;
        freenode(first);
        return(cur);
    }
    prev=NULL;
    cur=first;
    while(cur!=NULL)
    {
        if(key==cur->info)
         break;
        prev=cur;
        cur=cur->link;
    }
    if(cur==NULL)
    {
        printf("Key not found");
        return(first);
    }
    prev->link=cur->link;
    printf("%d deleted\n",cur->info);
    freenode(cur);
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
    int choice,item,key;
    NODE first=NULL;
    for( ; ; )
    {
      printf("\nEnter your choice\n1.Insert_front\n2.Delete_info\n3.Display\n4.Exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:printf("Enter the data\n");
                 scanf("%d",&item);
                 first=insert_front(item,first);
                 break;
          case 2:printf("Enter the item to be deleted\n");
                 scanf("%d",&key);
                 first=delete_info(key,first);
                 break;
          case 3:display(first);
                 break;
          case 4:exit(0);
      }
    }
    return 0;
}
