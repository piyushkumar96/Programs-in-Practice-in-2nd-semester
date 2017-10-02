#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
struct link
{
int a,b;
struct link *next;
}*head=NULL,*cur=NULL,*temp=NULL;
void push()
{
if(temp==NULL)
{
temp=malloc(sizeof(struct link));
printf("we are entering in first node\n");
printf("\nenter const and power of x\n");
scanf("%d%d",&temp->a,&temp->b);
temp->next=NULL;
cur=temp;
head=temp;
}
else
{
temp=malloc(sizeof(struct link));
printf("enter two nos\n");
scanf("%d%d",&temp->a,&temp->b);
temp->next=NULL;
cur->next=temp;
cur=temp;
}}
void pop()
{
int n;
struct link *del;
temp=head;
del=head->next;
printf("enter the cons term of node you want to delete\n");
scanf("%d",&n);
while(del!=NULL)
{
if(del->a==n)
{
temp->next=del->next;}
else
{
temp=del;
del=del->next;}} }


void cal()
{ int s=0,c;


printf("enter the value of x\n");
scanf("%d",&c);
temp=head;

while(temp!=NULL)
{
 printf("%d   %d\n",temp->a,temp->b);
s=s+(temp->a*(pow(c,temp->b)));
temp=temp->next;
}
printf("the sum of polynomial is %d\n",s);
}
void main()
{int p;
clrscr();

while(1)
{
printf("press 1 for push 2  for pop 3 for display of sum  and any integer to exit\n");
scanf("%d",&p);
switch(p)
{
case 1:push();break;
case 2:pop();break;
case 3:cal();break;
default:exit(0);
}
}
getch(
);
}
