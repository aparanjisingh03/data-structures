#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *prev,*next;
};
struct node *first=NULL,*last=NULL;
int count=0;
void insertend(int x)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nunable to create new node");
}
else
{
count++;
newnode->data=x;
newnode->next=NULL;
newnode->prev=last;
last->next=newnode;
last=newnode;
}
}
void insertbegin(int x)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\nunable to create node");
return;
}
else
{
count++;
newnode->data=x;
newnode->next=first;
newnode->prev=NULL;
first->prev=newnode;
first=newnode;
}
}
void display1(void)
{
struct node *temp;
if(first==NULL)
 {
   printf("\nList is empty");
   return;
 }
printf("\nList contents \n");
for(temp=first;temp->next!=NULL;temp=temp->next)
printf("%d->",temp->data);
printf("%d",temp->data);
}
void display2(void)
{
struct node *temp;
if(last==NULL)
{
printf("\nList is empty");
return;
}
printf("\nList contents \n");
for(temp=last;temp->prev!=NULL;temp=temp->prev)
printf("%d->",temp->data);
printf("%d",temp->data);
printf("\nTotal nodes in the list is %d",count);
}
void insertatanywhere(int x)
{
int c=1,position;
printf("After which node you want to insert:");
scanf("%d",&position);
if(position>=count || position==0)
printf("insertion is not possible");
else
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
struct node *temp=first, *temp1=last;
if(position<count/2)
{
	while(c<position)
{
 c=c+1;
 temp=temp->next;
}
newnode->data=x;
newnode->next=temp->next;
newnode->prev=temp;
temp->next->prev=newnode;
temp->next=newnode;
}
else
{
c=count;
while(c>position)
{
 c=c-1;
 temp1=temp1->prev;
}
newnode->data=x;
newnode->next=temp1->next;
newnode->prev=temp1;
temp1->next->prev=newnode;
temp1->next=newnode;
}
count++;
}
}
void main()
{
int c,x;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
count++;
if(newnode==NULL)
{
printf("\nunable to create new node");
return;
}
newnode->next=NULL;
newnode->prev=NULL;
printf("\nRead element:");
scanf("%d",&newnode ->data);
first=last=newnode;
do
{
printf("\n1.insert at end 2.insert at begin 3.insertanywhere 4.display 5.exit");
printf("\nEnter your choice :");
scanf("%d",&c);
switch(c)
{
 case 1: printf("\nEnter an integer to insert:");
 scanf("%d",&x);
 insertend(x);
 break;
 case 2: printf("\nEnter an integer to insert:");
 scanf("%d",&x);
 insertbegin(x);
 break;
 case 3: printf("\nEnter an integer to insert:");
 scanf("%d",&x);
 insertatanywhere(x);
 break;
 case 4: display1();
 display2();
 break;
 case 5: exit(0);
 default:printf("invalid choice");
 }
}while(c!=5);
}
 
	


