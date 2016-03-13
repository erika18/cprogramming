#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int top,items[100];
};
void init(struct stack *ps)
 {
     ps->top=-1;
 }
 void push(struct stack *ps, char ch)
  {
      (ps->items[++ps->top])=ch;
  }
  int pop(struct stack *ps)
  {
      return(ps->items[ps->top--]);
  }
int main()
{
    struct stack s;
    int i;
    char s1[10],ch;
    init(&s);
    printf("enter the string\n");
    gets(s1);

    for(i=0; s1[i]!='\0';i++)
     {
         push(&s,s1[i]);
     }
     printf("\n");
     while(s.top!=-1)
      {
          ch=pop(&s);
          printf("%c",ch);
      }
    return 0;
}
