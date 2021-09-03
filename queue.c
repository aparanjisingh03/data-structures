#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void enqueue(int);
int dequeue();
void display();
int front=-1,rear=-1,q[MAX];
main()
{
	int x,y,n;
	do
	{
		printf("enter choice\n1.insert \n2.delete \n3.display\n4.exit");
		scanf("%d",&x);
		switch(x)
		{
			case 1:printf("enter elements into queue");
			            scanf("%d",&y);
			            enqueue(y);
			            break;
			case 2:n=dequeue();
			            printf("%d is deleted",n);
			            break;
			case 3:display();
			            break;
			case 4:exit(0);
		}
	}while(x!=4);
}
void display(void)
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",q[i]);
    }
}
void enqueue(int x)
{
	if(front==-1&&rear==-1)
	{
		front=0;rear=0;q[rear]=x;
	}
	else if(front==0&&rear==MAX-1)
	{
		printf("overflow");
	}
	else
	{
		rear=rear+1;
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
		printf("underflow");
	}
	else
	{
		y=q[front];
		front++;
	}
	return y;
}
