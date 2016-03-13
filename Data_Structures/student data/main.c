#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct student
{
    int id;
    int sem;
    char name[30];
    struct student *link;
};
 typedef struct student *NODE;
NODE getnode()
{
    NODE X;
    X=(NODE)malloc(sizeof(struct student));
    if(X==NULL)
    {
        printf("Memory not available\n");
        exit(0);
    }
    return(X);
}
void freenode(NODE X)
{
    free(X);
}
NODE insert_front(int id,int sem,char name[],NODE first)
{
    NODE temp;
    temp=getnode();
    temp->id=id;
    temp->sem=sem;
    strcpy(temp->name,name);
    temp->link=first;
    return(temp);
}
NODE insert_rear(int id,int sem,char name[],NODE first)
{
    NODE temp,cur;
    temp=getnode();
    temp->id=id;
    temp->sem=sem;
    strcpy(temp->name,name);
    temp->link=NULL;
    if(first==NULL)
    {
        return(temp);
    }
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return(first);
}
NODE insert_pos(int id,int sem,char name[],NODE first,int pos)
{
    NODE temp,prev,cur;
    int count=1;
    temp=getnode();
    temp->id=id;
    temp->sem=sem;
    strcpy(temp->name,name);
    temp->link=NULL;
    if(first==NULL && pos==1)
    {
        return(temp);
    }
    if(first==NULL)
    {
        printf("Invalid position\n");
        freenode(temp);
        return(NULL);
    }
    if(pos==1)
    {
        temp->link=first;
        return(temp);
    }
    prev=NULL;
    cur=first;
    while(cur!=NULL)
    {
        if(pos==count)
         break;
        prev=cur;
        cur=cur->link;
        count++;
    }
    if(pos!=count)
    {
        printf("Invalid position\n");
        freenode(temp);
        return(first);
    }
    prev->link=temp;
    temp->link=cur;
    return(first);
}
NODE delete_id(int id,NODE first)
{
    NODE cur,prev;
    if(first==NULL)
    {
        printf("List is empty\n");
        return(NULL);
    }
    prev=NULL;
    cur=first;
    while(cur!=NULL)
    {
        if(cur->id==id)
         break;
        prev=cur;
        cur=cur->link;
    }
    if(cur==NULL)
    {
        printf("Student with id %d not found\n",id);
        return(first);
    }
    prev->link=cur->link;
    printf("Student with id %d deleted\n",id);
    freenode(cur);
    return(first);
}
void search(int id,NODE first)
{
    NODE cur;
    if(first==NULL)
    {
        printf("List is empty\n");
        return;
    }
    cur=first;
    while(cur!=NULL)
    {
        if(cur->id==id)
         break;
        cur=cur->link;
    }
    if(cur==NULL)
    {
        printf("Search unsuccessful\n");
        return;
    }
    printf("Search successful\n");
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Contents of the list are\n");
    temp=first;
    while(temp!=NULL)
    {
        printf("Name=%s\n",temp->name);
        printf("Student id=%d\n",temp->id);
        printf("Semester=%d\n\n",temp->sem);
        temp=temp->link;
    }
}
int main()
{
    int choice,pos,id,sem;
    char name[30];
    NODE first=NULL;
    for( ; ; )
    {
      printf("\nEnter your choice\n1.Insert_rear\n2.Insert_front\n3.Insert_pos\n4.Delete_id\n5.Search_id\n6.Display\n7.Exit\n");
      scanf("%d",&choice);
      if(choice==1 || choice==2 ||choice==3)
      {
          printf("Enter the name:\n");
          scanf("%s",name);
          printf("Enter the id:\n");
          scanf("%d",&id);
          printf("Enter the semester:\n");
          scanf("%d",&sem);
      }
      switch(choice)
      {
          case 1:first=insert_rear(id,sem,name,first);
                 break;
          case 2:first=insert_front(id,sem,name,first);
                 break;
          case 3:printf("Enter the position:\n");
                 scanf("%d",&pos);
                 first=insert_pos(id,sem,name,first,pos);
                 break;
          case 4:printf("Enter the id of the student to be deleted:\n");
                 scanf("%d",&id);
                 first=delete_id(id,first);
                 break;
          case 5:printf("Enter the id of the student to be searched:\n");
                 scanf("%d",&id);
                 search(id,first);
                 break;
          case 6:display(first);
                 break;
          case 7:exit(0);
      }
    }
    return 0;
}
