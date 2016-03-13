#include <stdio.h>
#include <ctype.h>

#define max 10

struct stack
{
          char items[max];
          int top;
};

void push(struct stack *s, char sym)
{
          if(s->top==max-1)
          {
                    printf("Expression too long to convert\n");
                    exit(0);
          }
          else
          {
                    s->top++;
                    s->items[s->top]=sym;
          }
}

char pop(struct stack *s)
{
          char x=s->items[s->top];
          s->top--;
          return x;
}

int precedence(char x)
{
          switch(x)
          {
                    case '+':9
    s.top=-1;
    printf("Enter the infix expression:\n");
    scanf("%s",infix);
    for(i=0;infix[i]!='\0';i++)
    {
              symbol=infix[i];
              if(isdigit(symbol))
              {
                        postfix[p]=symbol;
                        p++;
              }
              else if(symbol=='(')
              {
                        push(&s,symbol);
              }
              else if(symbol==')')
              {
                        while((t=pop(&s))!='(')
                        {
                                  postfix[p]=t;
                                  p++;
                        }
              }
              else
              {
                        if(s.top!=-1 && precedence(symbol)<=precedence(s.items[s.top]))
                        {
                                  postfix[p]=pop(&s);
                                  p++;
                        }
                        push(&s,symbol);
              }
    }
    while(s.top!=-1)
    {
              postfix[p]=pop(&s);
              p++;
    }
    postfix[p]='\0';
    printf("Postfix expression is:\n%s",postfix);
    return 0;
}
