#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=-1,rear=-1;
void main()
{
  void insertq(int);
  int deleteq();
  int searchq(int);
  int data,opt,tfront,ans;
  do
  {
    printf("\n1.INSERT QUEUE  \n");
    printf("2.DELETE QUEUE  \n");
    printf("3.SEARCH QUEUE  \n");
    printf("4.EXIT QUEUE  \n");
    printf("ENTER YOUR OPTION:  \n");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1: printf("DATA IS:");
              scanf("%d",&data);
              insertq(data);
              break;
      case 2: data=deleteq();
              printf("DELETED ITEM=%d",data);
              break;
      case 3: printf("ITEM TO BE SEARCHED:");
              scanf("%d",&data);
              ans=searchq(data);
              if(ans==1)
                printf("found \n");
              else
                printf("not found \n");
              break;
      case 4: exit(0);
    }
  }
  while(1);
}
void insertq(int item)
{
  if(rear==SIZE-1)
    printf("Queue is full \n");
  else
    que[++rear]=item;
}
int deleteq()
{
  if(front==rear)
    printf("Queue is empty");
  else
    front++;
    return que[front];
}
int searchq(int item)
{
  int tfront=front+1;
  while(tfront!=rear && que[tfront]!=item)
    ++tfront;
    if(que[tfront]==item)
      return 1;
    else
      return 0;
}
              
    
    
    

