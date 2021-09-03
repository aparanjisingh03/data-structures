#include<stdlib.h>
#include<stdio.h>
//#include<alloc.h>
struct node
{
 int data;
 struct node *next;
};
struct node *start=NULL;
struct node *newnode;
struct node *ptr;
struct node *preptr;
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *insert_before_a_particular(struct node*);
struct node *insert_after_a_particular(struct node*);
struct node *delete_beg(struct node*);
struct node *delete_end(struct node*);
struct node *delete_after_a_particular(struct node*);
struct node *delete_before_a_particular(struct node*);
struct node *delete_particular(struct node*);
struct node *sort(struct node*);
struct node *delete_list(struct node*);
void display(struct node*);

int num,val;
main()
{
	int num,ch;
 newnode=(struct node*)malloc(sizeof(struct node));
 
 do
 {
   printf("\n enter your choice");
   printf("\n 1.insert begning\n2.insert end\n3.display\n4.insert   before\n5.insert after\n6.delete begining\n7.delete ending\n 8.deleteafter\n9.delete before\n10.delete particular\n11.sorting\n12.delete entire list\n13.exit\n");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:start=insert_beg(start);
            printf("\n\n");
            break;
     case 2:start=insert_end(start);
           printf("\n\n");
           break;
     case 3:display(start);
           printf("\n\n");
           break;
          
	 case 4:start=insert_before_a_particular(start);
           printf("\n\n");
           break;
     case 5:start=insert_after_a_particular(start);
           printf("\n");
           break;
     case 6:start=delete_beg(start);
           printf("\n\n");
           break;

     case 8:start=delete_after_a_particular(start);
	           printf("\n\n");
	           break;
	 case 7:start=delete_end(start)  ;
	           printf("\n\n");
	           break;
     case 9:start=delete_before_a_particular(start);
	           printf("\n\n");
	           break;
     case 10:start=delete_particular(start);
	             printf("\n\n");
	             break;
     case 11:start=sort(start);
	             printf("\n\n");
	             break;
 
     case 12:start=delete_list(start);
	            printf("\n linked list deleted");
	            break;
     case 13:exit(0);
   }
 }while(ch!=13);
getch();
return 0;
}

/*INSERT AT BEGINNING*/
 
struct node *insert_beg(struct node *start)
 {
   do
   {
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("\n enter value of node");
   scanf("%d",&num);
   if(start==NULL)
    {
      newnode->data=num;
      newnode->next=NULL;
      start=newnode;
    }
   else
    {
      newnode->data=num;
      newnode->next=start;
      start=newnode;
     }
 }
 while(num!=-1);
return start;
}


	

	/*INSERT AT ENDING*/
struct node *insert_end(struct node *start)
{
 do
 {
   newnode=(struct node*)malloc(sizeof (struct node));
   printf("\n enter value of node");
   scanf("%d",&num);
   if(start==NULL)
    {
      newnode->data=num;
      newnode->next=NULL;
      start=newnode;
     }
    else
    {
      newnode->data=num;
      newnode->next=NULL;
      ptr=start;
    while(ptr->next!=NULL)
	ptr=ptr->next;
    ptr=ptr->next;
    }
    }
    while(num!=-1) ;
return start;

}

/*DISPLAYING THE LINKED LIST*/
void display(struct node *start)
{
 ptr=start;
 while(ptr!=NULL)
 {
    printf("\n %d",ptr->data);
    ptr=ptr->next;
 }
}

/*INSERT BEFORE A PARTICULAR NODE*/

struct node *insert_before_a_particular(struct node*start)
{
 printf("\n enter a value");
 scanf("%d",&num);
 ptr=start;
 preptr=start;
 printf("\n enter the node value to insert before node");
 scanf("%d",&num);
 newnode=(struct node*)malloc(sizeof(struct node));
 while(ptr->data==num)
 {
  preptr=ptr;
  ptr=ptr->next;
 }
 newnode->next=preptr->next;
 preptr->next=newnode;
 return start;
}

/*INSERT AFTER A PARTICULAR NODE*/
struct node *insert_after_a_particular(struct node*start)
{
 int val;
 ptr=start;
 printf("\n ente a node to insert after a particular node");
 scanf("%d",&val);
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=num;
 while(preptr->data!=val)
 {
   preptr=ptr;
   ptr=ptr->next;
 }
 newnode->next=ptr;
 preptr->next=newnode;
 return start;
 }
/*DELETE AT BEGINNING*/

struct node*delete_beg(struct node *start)
{
struct node*ptr;
ptr=start;
if(start!=NULL)
   start=start->next;
free(ptr);
printf("\n %d",ptr->data);
return start;
}

/*DELETE AT ENDING*/
struct node*delete_end(struct node *start)
{
 ptr=start;
 while(ptr->next!=NULL)
 {
   preptr=ptr;
   ptr=ptr->next;
 }
 preptr->next=NULL;
 free(ptr);
 printf("\n %d",ptr->data);
 return start;
}




/*DELETE AFTER A PARTICULAR NODE*/
struct node*delete_after_a_particular(struct node *start)
{
 ptr=start;
 while(preptr->data!=num)
 {
   preptr=ptr;
   ptr=ptr->next;
 }
 preptr->next=ptr->next;
 free(ptr);
 return start;
}

/*DELETE BEFORE A PARTICULAR
NODE*/
struct node *delete_before_a_particular(struct node *start)
{
 struct node *p;
 ptr=start;
 preptr=start;
 ptr=start;
 while(ptr->data!=num)
 {
   p=preptr;
   preptr=ptr;
   ptr=p;
  }
  preptr->next=preptr->next;
  free(preptr);
  return start;
}



/*DELETE A PARTICULAR NODE*/
struct node *delete_particular(struct node *start)
{

ptr=start;
preptr=start;
while(preptr->data!=num)
{
  preptr=ptr;
  ptr=ptr->next;
}
preptr->next=ptr->next;
free(preptr);
return start;
}



/*SORTING A LIST*/

struct node *sort(struct node *start)
{
 ptr=start;
 while(ptr->next!=NULL)
 {
  preptr=ptr->next;
  while(ptr!=NULL)
  {
   if(ptr->data>preptr->data)
   {
      val=ptr->data;
      ptr->data=preptr->data;
      preptr->data=val;
   }
   preptr=preptr->next;
   }
   ptr=ptr->next;
   }
  return start;}

/*DELETE A LIST*/
struct node *delete_list(struct node *start)
{
 struct node *ptr;
 if(start!=NULL)
 {
    ptr=start;
    while(ptr!=NULL)
    {
	printf("\n %d is to be deleted next",ptr->data);
	start=delete_beg(ptr);
	ptr=start;
    }
 }
 return start;
}

