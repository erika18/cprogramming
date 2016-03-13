#include <stdio.h>
#include<stdlib.h>
struct ll_node
{
    int data;
    struct ll_node *rlink;
    struct ll_node *llink;
};
typedef struct ll_node *NODE;
NODE getnode();
NODE insert_rear(int item,NODE first,NODE last);
NODE insert_front(int item,NODE first,NODE last);
NODE delete_rear(NODE first,NODE last);
NODE delete_front(NODE first,NODE last);
void display(NODE first,NODE last);
int main()
{
    int choice,item;
    NODE first=NULL;
    NODE last=NULL;
    while(1)
    {
         printf("\n1.Insert rear\n2.Insert front\n3.Delete rear\n4.Delete front\n5.Display\n6.Exit\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the element:");
                   scanf("%d",&item);
                   last=insert_rear(item,first,last);
                   break;
            case 2:printf("Enter the element");
                   scanf("%d",&item);
                   first=insert_front(item,first,last);
                   break;
            case 3:last=delete_rear(first,last);
                   break;
            case 4:first=delete_front(first,last);
                   break;
            case 5:display(first,last);
                   break;
            case 6:exit(0);
            default:printf("\n Invalid choice");
        }
    }
    return 0;
}
NODE getnode()
{
    NODE new1;
    new1=(NODE)malloc(sizeof(struct ll_node));
    if(new1==NULL)
    {
        printf("\nMemory overflow");
        exit(0);
    }
    else
    return(new1);
}
NODE insert_front(int item,NODE first,NODE last)
{
    NODE temp;
    temp=getnode();
    temp->data=item;
    temp->rlink=NULL;
    temp->llink=NULL;
    if(first==NULL&&last==NULL)
    {
        first=last=temp;
        return(first);
    }
    temp->rlink=first;
    first->llink=temp;
    first=temp;
    return(first);
}
NODE insert_rear(int item,NODE first,NODE last)
{
    NODE temp;
    temp=getnode();
    temp->data=item;
    temp->rlink=NULL;
    temp->llink=NULL;
    if(first==NULL||last==NULL)
    {
        first=temp;
        last=temp;
    }
    temp->llink=last;
    last->rlink=temp;
    last=temp;
    return(last);
}
NODE delete_front(NODE first,NODE last)
{
    NODE temp;
    if(first==NULL&&last==NULL)
    {
        printf("\n list is empty");
        return(first);
    }
    if(first->rlink==NULL&&last->llink==NULL)
    {
        printf("Deleted node is :%d",first->data);
        free(first);
    }
    else
    {
        temp=first;
        first=first->rlink;
        first->llink=NULL;
        temp->rlink=NULL;
        printf("Deleted node is :%d",temp->data);
        free(temp);
    }
    return(first);
}
NODE delete_rear(NODE first,NODE last)
{
    NODE temp;
    if((first)==NULL&&last==NULL)
    {
        printf("\n List is empty");
        return(NULL);
    }
    if((first)==last)
    {
        printf("Deleted node is :%d",last->data);
        free(last);
    }
    else
      temp=last;
      last=last->llink;
      last->rlink=NULL;
      printf("Deleted node is: %d",temp->data);
      temp->llink=NULL;
      free(temp);
      return(last);
}
void display(NODE first,NODE last)
{
    NODE cur;
    if(first==NULL&&last==NULL)
    {
        printf("\n List is empty");
        return;
    }
    else
    {
        cur=first;
        printf("\n Contents of the list\n");
        while(cur!=NULL)
        {
            printf("%d\t",cur->data);
            cur=cur->rlink;
        }
    }
}
