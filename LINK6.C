#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int c=0,i,j,d=0;
struct listack
{ int a;
struct listack *next;
}*start=NULL,*curr=NULL,*top=NULL,*ptr=NULL,*ptr1=NULL;
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
   while(top!=curr)
   { ptr=top;
   top=top->next;
   }
   curr=ptr;
   curr->next=NULL;
   }
  }
  void DISPLAY()
   { if(start==NULL)
   printf("\nno elements to display\n");
   else
   {
   top=start;
    while(top!=NULL)
    {       printf("%d \t", top->a);
	   top=top->next;
    }
   }
   }
  void DISPLAYALTERNATE()
   { top=start;
    while(top!=NULL)
    {       printf("%d  %d \t", top->a,top->next->next->a);
	   top=top->next;
	   if(top->next->next==NULL)
	   break;
    }
   }
   void DISPLAYNEXTTONEXT()
   { top=start;
    while(top!=NULL)
    {       printf("%d  %d \t", top->a,top->next->next->next->a);
	   top=top->next;
	   if(top->next->next->next==NULL)
	   break;
    }
   }
  void DISPLAYFIRSTLAST()
   { top=start;
    while(top!=NULL)
   { c++;
   top=top->next;
   }
   printf("\ntotal no.of node is %d \n",c);
    ptr=NULL;
    ptr1=start;
   for(i=0;i<c;i++)
   {                                 /* ptr1=start;
				       for(j=0;j<d;j++)
					 {  ptr1=ptr1->next;
					     d++;
					 }  printf(" %d \t", ptr1->a);
				      */
    printf(" %d \t", ptr1->a);
    ptr1=ptr1->next;
   top=start;
    while(top->next!=ptr)
    {
	   top=top->next;
    }  printf(" %d \t", top->a);
    ptr=top;
    printf("\n");
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
    void ASCENDINGDISPLAY()
   { top=start;
    while(top!=NULL)
   { c++;
   top=top->next;
   }
   printf("\ntotal no.of node is %d \n",c);
   top=start;
    ptr=NULL;
   for(i=0;i<c;i++)
   { top=start;
    while(top!=NULL)
    {  if(top->a>top->next->a)
     { ptr->a=top->next->a;
       top->next->a=top->a;
	top->a=ptr->a;
     }
     top=top->next;
    }
   }
DISPLAY();
}
void DESCENDINGDISPLAY()
   { top=start;
    while(top!=NULL)
   { c++;
   top=top->next;
   }
   printf("\ntotal no.of node is %d \n",c);
   top=start;
    ptr=NULL;
   for(i=0;i<c;i++)
   { top=start;
    while(top!=NULL)
    {  if(top->a<top->next->a)
     { ptr->a=top->next->a;
       top->next->a=top->a;
	top->a=ptr->a;
     }
     top=top->next;
    }
   }
DISPLAY();
}
  void main()
  {
	int ch;
  clrscr();
  while(1)
  {
 printf("\n enter the choice to \n 1.push \n 2.pop \n 3.display \n 4.displayalternate \n 5.displaynexttonext \n 6.displayfirstlast \n 7.reversediplay \n 8.acendingdisplay \n9. descendingdisplay \n 10.exit");
 scanf("%d",&ch);
 switch(ch)
 { case 1: PUSH();break;
 case 2: POP();break;
 case 3: DISPLAY();break;
 case 4: DISPLAYALTERNATE();break;
 case 5: DISPLAYNEXTTONEXT();break;
 case 6: DISPLAYFIRSTLAST();break;
 case 7:REVERSEDISPLAY();break;
 case 8:ASCENDINGDISPLAY();break;
 case 9:DESCENDINGDISPLAY();break;
 case 10: exit(1);
 defaut: printf(" \n you have enter wrong choice");
 }
 }
   getch();
}