#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int c=0,i,n=0;
struct listack
{ int a;
struct listack *next;
}*start=NULL,*curr=NULL,*top=NULL,*ptr=NULL;
  void PUSH()
  { n++;
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
  { if(n>0)
  {
  	 if(start==NULL)
	 { printf("\n UNDERFLOW");
	   }
   else
   { top=start;
   while(top->next!=NULL)
   { ptr=top;
   top=top->next;
   }
   ptr->next=NULL;
   curr=ptr;
   }
   n--;
   }
   if(n==0)
   {start=NULL;
   printf("\n underflow \n");
   }
  }
  void DISPLAY()
   { if(start==NULL)
   printf("\n no element to display");
        else
        {
   	 top=start;
    while(top!=NULL)
    {       printf("%d \t", top->a);
	   top=top->next;
    }
        }
   }
   
  void REVERSEDISPLAY()
   { top=start;
    while(top!=NULL)
   { c++;
   top=top->next;
   }
   printf("\ntotal no.of node is %d \n",c);
    ptr=NULL;
   for(i=0;i<c;i++)
   { top=start;
    while(top->next!=ptr)
    {
	   top=top->next;
    }  printf(" %d \t", top->a);
    ptr=top;
   }
   }
  void main()
  {
	int ch;
  clrscr();
  while(1)
  {
 printf("\n enter the choice to \n 1.push \n 2.pop \n 3.display \n 4.reversediplay \n 5.exit");
 scanf("%d",&ch);
 switch(ch)
 { case 1: PUSH();break;
 case 2: POP();break;
 case 3: DISPLAY();break;
 case 4:REVERSEDISPLAY();break;
 case 5: exit(1);
 defaut: printf(" \n you have enter wrong choice");
 }
 }
   getch();
}