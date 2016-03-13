#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE insert_front(int item,NODE list)
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nMemory overflow");
        return 0;
    }
    temp->info=item;
    if(list==NULL)
    {
        list=temp;
    }
    else
     temp->link=list->link;
     list->link=temp;
    return(list);
}
NODE insert_rear(int item,NODE list)
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nMemory overflow");
        return 0;
    }
    temp->info=item;
    if(list==NULL)
    {
        list=temp;
    }
    else
    temp->link=list->link;
    list->link=temp;
    return temp;
}
NODE delete_front(NODE list)
{
    NODE first;
    if(list==NULL)
    {
        printf("\nLIST IS EMPTY");
        return NULL;
    }
    if(list->link==list)
    {
        printf("\nThe item deleted is :%d",list->info);
        free(list);
        return NULL;
    }
    first=list->link;
    list->link=first->link;
    printf("\nItem deleted is:%d",first->info);
    free(first);
    return(list);
}
NODE delete_rear(NODE list)
{
    NODE prev;
    if(list==NULL)
    {
        printf("\nLIST IS EMPTY");
        return NULL;
    }
    if(list->link==list)
    {
        printf("\nThe item deleted is :%d",list->info);
        free(list);
        return NULL;
    }
    prev=list->link;
    while(prev->link!=list)
    {
        prev=prev->link;
    }
    prev->link=list->link;
    printf("\nItem deleted :%d",list->info);
    free(list);
    return(prev);
}
void display(NODE list)
{
    NODE temp;
    if(list==NULL)
    {
        printf("\nList is empty");
        return;
    }
    printf("\nContents of the list \n");
    temp=list->link;
    while(temp!=list)
    {
        printf("%d\t",temp->info);
        temp=temp->link;
    }
    printf("%d",temp->info);
}
int main()
{
    NODE list;
    int ch,item;
    list=NULL;
    for(;;)
    {
        printf("\n1.Insert front\n2.Insert rear\n 3.Delete front\n4.Delete rear\n5.Display\n6.Exit\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter the item to be inserted:");
                   scanf("%d",&item);
                   list=insert_front(item,list);
                   break;
            case 2:printf("\nEnter the item to be inserted:");
                   scanf("%d",&item);
                   list=insert_rear(item,list);
                   break;
            case 3:list=delete_front(list);
                   break;
            case 4:list=delete_rear(list);
                   break;
            case 5:display(list);
                   break;
            case 6:exit(0);
        }
    }
    return 0;
}


