#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE];
int sp=-1;
void main()
{
  int opt,data;
  void push(int);
  int pop();
  void display();
  do
    {
      printf("\n1.  push  \n");
      printf("2.  pop  \n");
      printf("3.  display  \n");
      printf("4.  exit  \n");
      printf("5.  your option is:  \n");
      scanf("%d",&opt);
      switch(opt)
      {
        case 1: printf("Data:");
                scanf("%d",&data);
                push(data);
                break;
        case 2: data=pop();
                printf("popped,item=%d",data);
                break;
        case 3: display();
                break;
        case 4: exit(0);
      }
    }
    while(1);
}
void push(int data)
{
  if(sp==SIZE-1)
   printf("FULL STACK");
  else
    stack[++sp]=data;
}
int pop()
{
  if(sp==-1)
  {
    printf("EMPTY STACK");
    exit(0);
  }
  else
    return stack[sp--];
}
void display()
{
  int tsp=sp;
  printf("STACK CONTENTS:\n");
  while(tsp!=-1)
  {
    printf("%d\n",stack[tsp]);
    tsp--;
  }
  if(sp==-1)
  {
    printf("EMPTY STACK \n");
    exit(1);
  }
  printf("\n");
}
              
        
  
