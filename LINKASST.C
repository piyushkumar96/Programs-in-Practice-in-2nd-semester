#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct listack
{ int a;
struct listack *next;
}*start=NULL,*curr=NULL,*top=NULL,*ptr=NULL;
  void PUSH()
  {
	if(start==NULL)
	  {  printf("\n creating the first node");
	  top=malloc(sizeof(struct listack));
	  printf("\nenter the no to insert ");
	  scanf("%d",&top->a);
	  top->next=NULL;
	  start=top;
	  curr=top;
	  }
	  else
	 { top=malloc(sizeof(struct listack));
	  printf("enter the no to insert ");
	  scanf("%d",&top->a);
	  top->next=NULL;
	  curr->next=top;
	  curr=top;
	  }
	  }
void POP()
  { if(start==NULL)
	 { printf("\n UNDERFLOW");
	   }
   else
   { top=start;
   ptr=start;
   while(top!=NULL)
   { ptr=top;
   top=top->next;
   }
   ptr->next=NULL;
   top=ptr;
   }
  }
  void DISPLAY()
   { top=start;
    while(top!=NULL)
    {       printf("%d \t", top->a);
	   top=top->next;
    }
   }
  void main()
  {
	int ch;
  clrscr();
  while(1)
  {
 printf(" enter the choice to \n 1.push \n 2.pop \n 3.display \n 4.exit");
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