#include <stdio.h>
#include <stdlib.h>
# define SIZE 5
struct stack
{
    int top;
    int items[SIZE];
};
void push(struct stack *ps, int x)
{
    if(ps->top==SIZE-1)
    {
        printf("Stack overflow \n");
        //exit(1);

    }
    else{

        printf("Enter the item to be pushed\n");
        scanf("%d",&x);
        ps->items[++(ps->top)]=x;
    }
    //return;
}
int pop(struct stack *ps)
{
    int x;
    if(ps->top==-1)
    {
        printf("Stack underflow\n");
        exit(1);

    }
    x=ps->items[(ps->top)--];
    return (x);

}
void display(struct stack s)
{
    int i;
    for(i=s.top;i>=0;i--)
    {
        printf("%d",s.items[i]);
    }
}

int main()
{
    struct stack s;
    int ch,x,repet;
    s.top=-1;
    printf("1:push\n2:pop\n3:display\n4:exit\n");
     printf("Enter your choice\n");
    scanf("%d",&ch);
    do{
        switch(ch)
        {
            case 1: push(&s,x);
                    break;
            case 2: x=pop(&s);
                    printf("The popped element is%d\n",x);
                    break;
            case 3: display(s);
                    break;
            case 4: exit(1);
            default:printf("Incorrect option\n");
        }
        printf("if you want to continue then press (Y/y)");
        scanf("%d",&repet);
    }while(repet=='y'||repet=='Y');
    return 0;
}
