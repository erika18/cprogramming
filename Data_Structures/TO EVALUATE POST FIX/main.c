#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAXSIZE 60
int x;
struct stack
{
    int top;
    int items[MAXSIZE];
};
void push (struct stack *ps, int x)
{
    ps->items[++(ps->top)]=x;
}
int pop(struct stack *ps)
{
    return(ps->items[ps->top--]);
}
float oper(char symb, float oprnd1, float oprnd2)
{
    switch(symb)
    {
        case '+':return (oprnd1+oprnd2);

        case '-':return(oprnd1-oprnd2);

        case '*' :return (oprnd1*oprnd2);

        case '/':return (oprnd1/oprnd2);

        case '$' : return (pow(oprnd1,oprnd2));

        default : printf("Invalid choice\n");
                    break;
    }
}
float eval(char expr[])
{
    char c;
    float opnd1,opnd2,value;
    int pos=0;
    struct stack opndstk;
    opndstk.top=-1;
    for(pos=0;(c=expr[pos])!='\0';pos++)
    {
        if (isdigit(c))
        {
            push(&opndstk,(float)(c-'0'));
        }
        else
        {
            opnd2=pop(&opndstk);
            opnd1=pop(&opndstk);
            value=oper(c,opnd1,opnd2);
            push(&opndstk,value);
        }
    }
    return(pop(&opndstk));
}
int main()
{
    char expr[MAXSIZE];
    int pos=0;
    printf("Enetr the postfix expression\n");
    while((expr[pos++]=getchar())!='\n');
    expr[--pos]='\0';
    printf("The original expression is %s\n",expr);
    printf("%f",eval(expr));
    return 0;
}

