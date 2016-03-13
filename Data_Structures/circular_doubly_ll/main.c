#include <stdio.h>
#include <stdlib.h>


struct node
{
    int info;
    struct node *link;

};
typedef struct node *NODE;

NODE insert_front(int item, NODE list)
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory overflow");
        return;
    }
    temp->info=item;
    if(list==NULL)
    list=temp;
    else
    temp->link=list->link;
    return list;
}
NODE insert_rear(int item,NODE list)
{
NODE temp;
temp=(NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
    printf("memory overflow");
    return;
}
temp->info=item;
if(list==NULL)
list=temp;
else
{
    temp->link=list->link;
    list->link=temp;
    return temp;

}
}
NODE delete_front(NODE list)
{
    NODE temp,first;
    if(list==NULL)
    {
        printf("empty\n");
        return NULL;

    }
    if(list->link==list)
    {
        printf("the item delted is %d\n",list->info);
        free(list);
        return NULL;
    }
    first=list->link;
    list->link=first->link;
    printf("item deleted is %d\n",first->info);
    free(first);
    return list;
}
NODE delete_rear(NODE list)
{
    NODE prev;
    if(list==NULL)
    {
        printf("empty\n");
        return NULL;
    }
    if(list->link==list)
    {
        printf("the item deleted id %d\n",list->info);
        free(list);
        return NULL;
    }
    prev=list->link;
    while(prev->link!=list)
    {
        prev=prev->link;
    }
    prev->link=list->link;
    printf("the item deleted is %d\n",list->info);
    free(list);
    return prev;
}
void display(NODE list)
{
    NODE temp;
    if(list==NULL)
    {
        printf("empty\n");
        return;
    }
    printf("contents of list is \n");
    temp=list->link;
    while(temp!=list)
    {
        printf("%d",temp->info);
        temp=temp->link;
    }
    printf("%d\n",temp->info);
}
int main()
{
    NODE list;
    int ch,item;
    list=NULL;
    for(;;)
    {
        printf("1.insert front 2. insert rear 3.delete front 4.delete rear 5.display 6.exit\n");
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter item to insert\n");
            scanf("%d",&item);
            list=insert_front(item,list);
            break;
            case 2:
            printf("enter item to insert\n");
            scanf("%d",&item);
            list=insert_rear(item,list);
            break;
            case 3:
            list=delete_front(list);
            break;
            case 4:
            list=delete_rear(list);
            break;
            case 5:
            display(list);
            case 6:
            exit(0);

        }
    }
    return 0;
}
