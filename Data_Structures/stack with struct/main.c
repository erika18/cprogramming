#include <stdio.h>
#include <stdlib.h>

#define max 5

struct stack
{
          int items[max],top;
};

void push(struct stack *s, int itm)
{
          if(s->top==max-1)
          printf("Stack is full\n");
          else
          {
                s->top++;
                s->items[s->top]=itm;
          }
}

void pop(struct stack *s)
{
          int temp;
          if(s->top==-1)
          printf("Stack is empty\n");
          else
          {
                    temp=s->items[s->top];
                    s->top--;
                    printf("%d is deleted\n",temp);

void display(struct stack *s)
{
          if(s->top==-1)
          printf("Stack is empty\n");
          else
          {
                    int i;
                    i=0;
                    while(i<=s->top)
                    {
                         printf("%d\t",s->items[i]);
                         i++;
                    }
                    printf("\n");
          }
}

int main()
{
    struct stack s;
    int ch,ele;
    s.top=-1;
    for(;;)
    {
              printf("\nMENU\n1=push\t2=pop\t3=display\t4=exit");
              printf("\nEnter your choice: ");
              scanf("%d",&ch);
              switch(ch)
              {
                        case 1:printf("Enter element to be inserted: ");
                               scanf("%d",&ele);
                               push(&s,ele);
                               break;
                        case 2:pop(&s);
                               break;
                        case 3:printf("Stack contents are:\n");
                               display(&s);
                               break;
                        case 4:exit(0);
                        default:printf("Invalid statement\n");
              }
    }
    return 0;
}
