#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n=0,i;
struct liqueue
{ int a;
struct liqueue *next;
}*ptr=NULL,*front=NULL,*rear=NULL,*p=NULL;
  void PUSH()
  { n++;
	if(front==NULL)
	  {  printf("\n creating the first node");
	  ptr=malloc(sizeof(struct liqueue));
	  printf("\nenter the no to insert ");
	  scanf("%d",&ptr->a);
	  ptr->next=NULL;
	  rear=ptr;
	  front=ptr;
	  }
	  else
	 { ptr=malloc(sizeof(struct liqueue));
	  printf("enter the no to insert ");
	  scanf("%d",&ptr->a);
	  ptr->next=NULL;
	  rear->next=ptr;
	  rear=ptr;
	  }
	  }
void POP()
  { ptr=NULL;
  p=front;
   for(i=0;i<n;i++)
   { p=front;
    while(p!=NULL)
    {  if(p->a>p->next->a)
     { ptr->a=p->next->a;
       p->next->a=p->a;
	p->a=ptr->a;
     }  
    p=p->next;
   }
   }
   if(n>0)
   {  front=front->next;
   n--;
   }
    if(n==0)
    {front=NULL;
    rear=NULL;
    printf("\n now no node to delete\n ");
    }
  }
  void DISPLAY()
   { if(front==NULL)
   printf("\n no node to display\n ");
   else
  {   ptr=front;
        while(ptr!=NULL)
         {       printf("%d \t", ptr->a);
	             ptr=ptr->next;
         }
   }
   printf(" \n the total no. of node is %d",n);
   }
  void main()
  {
	int ch;
  clrscr();
  while(1)
  {
 printf("\n enter the choice to \n 1.push \n 2.pop \n 3.display  \n 4.exit");
 scanf("%d",&ch);
 switch(ch)
 { case 1: PUSH();break;
 case 2: POP();break;
 case 3: DISPLAY();break;
 case 4: exit(1);
 defaut: printf(" \n you have enter wrong choice");
 }
 }
   getch();
}