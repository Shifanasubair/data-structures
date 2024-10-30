#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int que[SIZE];
int front=0,rear=0;
void main()
{
  void enque(int);
  int deque();
  int search(int);
  int option,item,ans;
  do
  {
    printf("\n 1.Insert \n");
    printf("\n 2.Delete \n");
    printf("\n 3.Search \n");
    printf("\n 4.Exit \n");
    printf("Enter your option:");
    scanf("%d",&option);
    switch(option)
    {
      case 1: printf("Enter the item:");
              scanf("%d",&item);
              enque(item);
              break;
      case 2:printf("Deleted Item=%d\n",deque());
              break;
      case 3: printf("Item to be searched is:");
              scanf("%d",&item);
              ans=search(item);
              if(ans==1)
                printf("%d found \n",item);
              else
                printf("%d not found \n",item);
                break;
     case 4:  exit(0);
   }
 }
 while(1);
}
void enque(int item)
{
  int t;
  t=(rear+1)%SIZE;
  if(t==front)
  {
    printf("Queue is full");
    exit(0);
  }
  else
  {
    rear=t;
    que[rear]=item;
  }
}
int deque()
{
  if(front==rear)
  {
    printf("Queue is empty!");
    exit(1);
  }
    front=(front+1)%SIZE;
    return que[front];
}
int search(int item)
{
  int tfront=front;
  if(tfront!=rear)
  {
    tfront=(tfront+1)%SIZE;
    while(tfront!=rear && que[tfront]!=item)
     tfront=(tfront+1)%SIZE;
     if(que[tfront]==item)
      return 1;
     else
      return 0;
  }
  return 0;
}
    
      
    
    
    
    
    
  
