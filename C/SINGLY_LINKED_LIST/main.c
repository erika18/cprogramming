
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int no;

    struct node *next;
};
    struct node *head;
    struct node  *p;
    struct node *temp;
    int ch1;

int main()
{

    void ins();
    void del();
    void disp();

    int ctr,num;
    char ch;


    head = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the no:: ");
    fflush(stdin);
    scanf("%d",&head->no);

    printf("\nDo u want to create another node:: ");
    fflush(stdin);
    scanf("%c",&ch);

    p=head;
    while(ch=='y' || ch=='Y')
    {
        p->next=(struct node *)malloc(sizeof(struct node));
        p=p->next;

        printf("\nEnter the no:: ");
        fflush(stdin);
        scanf("%d",&p->no);

        printf("\nDo u want to create another node:: ");
        fflush(stdin);
        scanf("%c",&ch);
    }
    p->next=NULL;

    printf("\n1)Insert \n2)Delete \n3)Traverse\t");
    fflush(stdin);
    scanf("%d",&num);

    if(num==1)
    {
        ins();
    }
    if(num==2)
    {
        del();
    }
    if(num==3)
    {
        disp();
    }
    return 0;
}

void disp()
{
        temp=head;
        while(temp!=NULL)
        {
            printf("\n%d",temp->no);
            temp=temp->next;
        }

}
void ins()
{
    int af;
    printf("\n1)Begining\n2)Middle\n3)End\t");
    fflush(stdin);
    scanf("%d",&ch1);
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the no::");
    fflush(stdin);
    scanf("%d",&temp->no);

    if(ch1==1)
    {

        temp->next=head;
        head=temp;
        disp();
    }
    if(ch1==2)
    {
        p=head;
        printf("\nAfter which node u want to insert::");
        fflush(stdin);
        scanf("%d",&af);

        while(p->no!=af)
        {
            p=p->next;
        }
        temp->next=p->next;
        p->next=temp;
        disp();
    }
    if(ch1==3)
    {
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->next=NULL;
        disp();
    }
}
void del()
{
    int num,af;

    printf("\n1)Begining\n2)Middle\n3)End");
    fflush(stdin);
    scanf("%d",&num);

    if(num==1)
    {
        p=head;
        head=p->next;
        free(p);
        disp();

    }
    if(num==2)
    {
        p=head;
        printf("\nAfter which node u want to del::");
        fflush(stdin);
        scanf("%d",&af);

        while(p->no!=af)
        {
            p=p->next;
        }
        temp=p->next;
        p->next=temp->next;
        free(temp);
        disp();
    }
    if(num==3)
    {
        p=head;

        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        temp=p->next;
        p->next=NULL;
        free(temp);
        disp();
    }
}

