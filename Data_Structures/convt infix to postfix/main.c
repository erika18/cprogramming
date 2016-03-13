#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50
# define TRUE 1
# define FALSE 0
#include <ctype.h>
#include <math.h>
int x;
struct stack
{
    int top;
    char item[MAXSIZE];
};


void push (struct stack *ps, int x)
{
    ps->item[++(ps->top)]=x;
}


int pop(struct stack *ps)
{
    return(ps->item[ps->top--]);
}


char stacktop(struct stack *ps)
{
    return(ps->item[ps->top]);
}


char empty(struct stack *ps)
{
    if ( ps->top==-1)
     return (TRUE);
     else
     return (FALSE);
}


int precd(char symb)
{
    int p;
    switch(symb)
    {
        case '$':p=3;
                 break;
        case '*':
        case'/' : p=2;
                  break;
        case '+':
        case '-': p=1;
                  break;
        case '(':
        case ')': p=0;
                  break;
    }
   return (p);
}
int prcd (char topsymb, char symb)
{
    if (topsymb=='('&&symb==')')
    {
        return (FALSE);
    }
    else if (symb=='(')
             return (FALSE);
         else if (symb==')')
                return (TRUE);
     if(topsymb=='(')
        return (FALSE);
    else
      return(precd(topsymb)>=precd(symb));
}
void postfix(char infix[],char postr[])
{
    int pos,outpos=0;
    struct stack opstk;
    opstk.top=-1;
    char symb,topsymb;
    for(pos=0;infix[pos]!='\0';pos++)
    {
        symb=infix[pos];
        if (isalpha(symb))
            postr[outpos++]=symb;
        else
        {
            while(!empty(&opstk)&&prcd(stacktop(&opstk),symb))
            {
                topsymb=pop(&opstk);
                postr[outpos++]=topsymb;

            }
            if (symb!=')')
              push(&opstk,symb);
            else
             pop(&opstk);
        }
    }
    while(!empty(&opstk))
    {
        postr[outpos++]=pop(&opstk);
        postr[outpos]='\0';
    }
}

int main()
{
    char infix[MAXSIZE],postr[MAXSIZE];
    int pos=0;
    printf("Enter the postfix string\n");
    while((infix[pos++]=getchar())!='\n');
    infix[--pos]='\0';
    printf("The input string is %s\n ",infix);
    postfix(infix,postr);
    printf("The postfix string is %s \n",postr);
    return 0;
}
