#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5
void push(int item,int *top,int s[])
{
    if(*top==STACK_SIZE-1)          //CHECK STACK OVERFLOW
    {
        printf("stack overflow\n");
        return;
    }
    *top=*top+1;
    s[*top]=item;
}

int pop(int *top,int s[])
{
    int item_deleted;        //stack underflow
    if(*top==-1)
    return 0;
    item_deleted=s[(*top)--];
    return item_deleted;
}

void display(int top,int s[])
{
    int i;
    if(top==-1)
    {
        printf("stack is empty\n");
        return ;
    }
    printf("contents of stack\n");
    for(i=0;i<=top;i++)
    {
        printf("%d\n",s[i]);
    }
}

int main()
{
    int top,s[10],item,item_deleted,ch;
    top=-1;
    for(;;)
    {

    printf("\n1.push\n2.pop\n3.display\n4.exit\n");
    printf("entr choice ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
                printf("\nenter item to b inserted\n");
                scanf("%d",&item);
                push(item,&top,s);
                break;
        case 2:
                item_deleted=pop(&top,s);
                if(item_deleted==0)
                printf("\nstack is empty\n");
                else
                printf("item deleted = %d\n",item_deleted);
                break;
        case 3:
                display(top,s);
                break;
        default:
                exit(0);
    }
    }
    return 0;
}
