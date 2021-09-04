#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//#include<alloc.h>
struct node
{
int data;
struct node*next;
};
struct node*start=NULL;
struct node*ptr=NULL;
struct node*push(struct node*);
struct node*pop(struct node*);
struct node*peep(struct node*);
struct node*display(struct node*);
void main()
{
int ch;
do
{
 printf("\nenter your choice\n");
 printf("\n  1)push  2)pop  3)peep  4)display  5)exit \n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1 : start=push(start);
	   break;
  case 2 : start=pop(start);
	   break;
  case 3 : start=peep(start);
	   break;
  case 4 : start=display(start);
	   break;
  case 5 : exit(0);
 }
}while(ch!=5);
}

struct node *push(struct node*start)
{
 int x;
 struct node*newnode;
 do
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter new node data");
    scanf("%d",&x);
    newnode->data=x;
    if(start==NULL)
    {
    newnode->next=NULL;
    start=newnode;
    }
    else
     {
       newnode->next=start;
       start=newnode;
     }
    }while(x!=-1);
  return start;
  }

struct node*pop(struct node*start)
{
  ptr=start;
  start=start->next;
  printf("%d is  deleted",ptr->data);
  free(ptr);
  return start;
}

struct node*peep(struct node*start)
{
  int z;
  ptr=start;
  z=ptr->data;
  printf("%d is the top element",z);
  return start;
}
struct node*display(struct node*start)
{
ptr=start;
if(start==NULL)
{
printf("list is empty");
}
else
{
 while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
}
return start;
}



