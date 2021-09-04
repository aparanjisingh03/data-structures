#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=-1,q[max];
void enqueue(int);
int dequeue(void);
void display(void);
struct node
{
int data;
struct node*next;
};
struct node*start=NULL;

struct node*ptr=NULL;
void main()
{
int x,y,n;
do
{
printf("\nenter your choice\n");
printf("\n 1)insert 2)delete 3)display 4)exit \n");
scanf("%d",&x);
switch(x)
{
 case 1 : printf("enter elements into queue");
 scanf("%d",&y);
 enqueue(y);
 break;
 case 2 : n=dequeue();
 printf("%d is deleted",n);
 break;
 case 3 : display();
 break;
 case 4 : exit(0);
}
}while(x!=5);
}
void enqueue(int x)
{
if(front==-1&&rear==-1)
{
front=0;
rear=0;
q[front]=q[rear]=x;
}
else if(front==0&&rear==max-1)
{
printf("overflow");
}
else
{
rear+=1;
q[rear]=x;
}
}
int dequeue()
{
int y;
if(front==-1&&rear==-1)
{
printf("underflow");
}
else if(front>rear)
{
printf("overflow");
}
else
{
y=q[front];
front++;
} 
return y;
}
void display(void)
{
int i;
for(i=front;i<=rear;i++)
{
printf("%d\n",q[i]);
}
}

