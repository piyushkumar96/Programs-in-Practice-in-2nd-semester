#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct link
{
int a,b;
struct link *next;
}*head=NULL,*cur=NULL,*temp=NULL;
void insert()
{ int n;  struct link *insert,*del;
del=head;temp=del->next;
printf("enter the element of node before which you want to insert\n");
scanf("%d",&n);
while(temp!=NULL)
{
if(temp->a==n||temp->b==n)
{
printf("enters details of new node");
insert=malloc(sizeof(struct link));
printf("\n enter the value of a and b");
scanf("%d %d",&insert->a,&insert->b);
insert->next=temp;
del->next=insert;
break;
}
else
{
del=temp;
temp=del->next;
}
}
}
void push()
{
if(temp==NULL)
{
temp=malloc(sizeof(struct link));
printf("we are entering in first node\n");
printf("\nenter two nos\n");
scanf("%d%d",&temp->a,&temp->b);
temp->next=NULL;
cur=temp;

head=temp;
printf("base address =%d\n",head);
}
else
{
temp=malloc(sizeof(struct link));
printf("enter two nos\n");
scanf("%d%d",&temp->a,&temp->b);
temp->next=head;
cur->next=temp;
cur=temp;
}}
void pop()
{
struct link *del;int i;
del=head;temp=del->next;
printf("enter the element to pop\n");
scanf("%d",&i);
while(temp->next!=head)
{
if(i==temp->a||i==temp->b)
{
del->next=temp->next;break;
}
else
{
del=temp;
temp=temp->next;
}}
}
void display()
{ temp=head;
printf("elements are %d and %d\n",temp->a,temp->b);
temp=temp->next;
printf("base address =%d",head);
while(temp!=head)
{
printf("\nelements of node are %d\n %d",temp->a,temp->b);
temp=temp->next;
printf("address =%d",temp);
}
}
void main()
{int p;
clrscr();

while(1)
{
printf("press 1 for push 2  for pop 3 for display and any integer to exit\n");
scanf("%d",&p);
switch(p)
{
case 1:push();break;
case 2:pop();break;
case 3:display();break;
case 4:insert();break;
default:exit(0);
}
}
getch();
}






