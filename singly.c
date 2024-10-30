#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
};
int main()
{
  struct node * start=(struct node *)0;
  struct node * insert(struct node *,int data);
  struct node * delete(struct node *);
  void display(struct node *);
  int opt,data,item;
  do
  {
    printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit\n");
    printf("Enter your option:");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1: printf("data is:");
              scanf("%d",&data);
              start=insert(start,data);
              break;
      case 2: start=delete(start);
              break;
      case 3: display(start);
              break;
      case 4: exit(0);
    }
  }
  while(1);
}
 struct node*insert(struct node *s,int item)
 {
  struct node *t;
  t=(struct node*)malloc(sizeof(struct node*));
  t->data=item;
  t->next=s;
  return t;
 }
 struct node*delete(struct node*s)
 {
  struct node *t=s;
  if(s!=(struct node*)0)
  {
    printf("%d delete\n",s->data);
    s=s->next;
    free(t);
    return s;
  }
  printf("Empty list\n");
  return s;
}
void display(struct node *s)
{ 
  while(s!=(struct node*)0)
  {
    printf("%d\t",s->data);
    s=s->next;
  }
}
  
