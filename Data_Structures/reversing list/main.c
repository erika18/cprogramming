#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE first;
NODE first=NULL;
NODE getnode()
{
    NODE alloc;
    alloc=(NODE)malloc(sizeof(struct node));
    if(alloc==NULL)
    {
        printf(("in sufficiant memory"));
        return(0);
    }
    else
    return(alloc);
}
void insert()
{
    int ele;
    NODE temp;
    temp=getnode();
    printf("enter the element");
    scanf("%d",&ele);
    temp->info=ele;
    temp->link=NULL;
    if(first==NULL)
    {
        first=temp;
    }
    else
    {
        temp->link=first;
        first=temp;
    }

}
void reverse()
{
    NODE temp,cur;
    cur=NULL;
    while(first!=NULL)
    {
        temp=first;
        first=first->link;
        temp->link=cur;
        cur=temp;
    }
    first=cur;
}
void print()
{
    NODE temp;
    if(first==NULL)
    {
        printf("no link present");
        return;
    }
    else
    temp=first;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->link;
    }
}
int main()
{
    int ch;
    printf("enter the list");
    printf("enter 1:insert\n2:print b4 reverse\n3:reverse");
    for(;;)
    {
        printf("\nenter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:
            printf("\nbefore reversing list is\n");
            print();
            break;
            case 3:goto p;
            break;

        }
    }

        p:reverse();

        printf("after reversing list is\n");
        print();

    return 0;
}
