#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define max 20

struct stack
{
          int items[max],top;
};

void push(struct stack *s, int itm)
{
          if(s->top==max-1)
          {
               printf("Expression too long to evaluate\n");
               exit(0);
          }
          else
          {
                s->top++;
                s->items[s->top]=itm;
          }
}

int pop(struct stack *s)
{
          int temp;
          temp=s->items[s->top];
          s->top--;
          return temp;
}

int eval(char opd,int op1,int op2)
{
     switch(opd)
     {
          case '+':return(op1+op2);
          case '-':return(op1-op2);
          case '*':return(op1*op2);
          case '/':return(op1/op2);
          case '$':return(pow(op1,op2));
     }
}

int main()
{
     struct stack s;
     int i,op1,op2,symbol,t;
     char postfix[20];
     printf("Enter the postfix expression to be evaluated:\n");
     scanf("%s",postfix);
     s.top=-1;
     for(i=0;postfix[i]!='\0';i++)
     {
          symbol=postfix[i];
          if(isdigit(symbol))
          push(&s,symbol);
          else
          {
               op2=pop(&s);
               op1=pop(&s);
               t=eval(symbol,op1,op2);
               push(&s,t);
          }
     }
     t=pop(&s);
     printf("Value of entered expression is: %d",t);
     return 0;
}
