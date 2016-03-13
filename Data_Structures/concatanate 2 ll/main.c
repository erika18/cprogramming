#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE first;
NODE sec=NULL;
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
void insertfirst()
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
void insertsec()
{
    int ele;
    NODE temp;
    temp=getnode();
    printf("enter the element");
    scanf("%d",&ele);
    temp->info=ele;
    temp->link=NULL;
    if(sec==NULL)
    {
        sec=temp;
    }
    else
    {
        temp->link=sec;
        sec=temp;
    }

}
void join()
{
    NODE temp;
    temp=first;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=sec;
}
void printfirst()
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
}void printsec()
{
    NODE temp;
    if(sec==NULL)
    {
        printf("no link present");
        return;
    }
    else
    temp=sec;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->link;
    }
}
void print()
{
    NODE temp;
    if(first==NULL)
    {
        printsec();
    }
    else if(sec==NULL)
    {
        printfirst();
    }
    else
    temp=first;
    while(temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->link;
    }
}
main()
{


   int ch,op,p,r;
    printf("enter the first linked list");
    printf("enter 1:insert\n2:exit");

    for(;;)
    {
        printf("\nenter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertfirst();
            break;
            case 2:goto p;
        }
    }
    p:printf("enter the second linked list");
    printf("enter 1:insert\n2:exit");

    for(;;)
    {
        printf("\nenter option");
        scanf("%d",&op);
        switch(op)
        {
            case 1:insertsec();
            break;
            case 2:goto r;

        }
    }
    r:printf("first list is\n");
    printfirst();
    printf("\nsecond list is\n");
    printsec();
    join();
    printf("resultant list is\n");
    print();

}
