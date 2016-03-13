#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define true 1
#define false 0
#define stacksize 100
struct stack
    {
        int top;
        float items[stacksize];
    }s;

    float evaluate(char[]);
    float pop();
    void push(float);
    int empty();
    float operation(float,float,char);
int main()
{
    char postfix[100];
    float value;
    s.top=-1;
    printf("enter the expression in postfix format");
    scanf("%s",postfix);
    value=evaluate(postfix);
    if(empty())
      {
          printf("the evaluated answer is %f",value);
      }
      else
      {
          printf("invalid expression");

      }

    return 0;
}
float evaluate(char postfix[])
   {
       int i;
       char symb;
       float op1,op2,val;
       for(i=0;postfix[i]!='\0';i++)
       {
           symb=postfix[i];
           if(symb>='0'&&symb<='9')
           push((float)(symb-'0'));
           else
           {
               op2=pop();
               op1=pop();
               val=operation(op1,op2,symb);
               push(val);
           }
       }
       return(pop());
   }
   float operation(float op1,float op2,char symb)
   {
       switch(symb)
       {
           case'+':return(op1+op2);
                   break;
           case'-':return(op1-op2);
                   break;
           case'*':return(op1*op2);
                   break;
           case'/':return(op1/op2);
                   break;
           case'$':return(pow(op1,op2));
                   break;
       }
   }

void push(float ele)
{
    if (s.top==stacksize-1)
    {
        printf("stack overfloaw");
        exit(1);
    }
    else
    {
        s.items[++(s.top)]=ele;
    }
}
float pop()
{
    if(empty())
    {
        printf("stack underflw");
        exit(1);
    }
    return(s.items[(s.top)--]);
}
int empty()
  {
      if (s.top==-1)
    return true;
    else
    return false;
  }
