 #include<stdio.h>
  #include<conio.h>
 # define size 5
 int rear=-1,front=-1;
  void QINSERT(int queue[ ],int item)
  {
	if(rear==size)
	printf("\nOVERFLOW\n");
	else if(rear==-1)
	{ rear=front=0;
	queue[rear]=item;
	rear++;
	 }
	 else
	 {     	 queue[rear]=item;
	 rear++;
	  }
}
 int QDELETE(int queue[ ])
  { int temp;
	 if(front==-1)
	 { printf("\n UNDERFLOW");
	   }

	    else
	    {
	       temp=queue[front];
	       if(rear==front)
	       rear=front=-1;
	       else
	      front++;
	    }
		  return (temp);
		  
		  }
  void DISPLAY(int queue[])
   {  int i;
   if (((front==0) &&(rear==0))||(front==-1))
	 printf("queue empty\n");
	 else
	  {
		 for(i=front;i<rear;i++)
		 printf("%d\t", queue[i]);

	   }
      }
  void main()
  {
	int queue[size],item,res,p;
  clrscr();
  while(1)
  {
printf("\nenter the choice to \n 1.insert \n 2. delete  \n 3. display \n 4. exit \n");
scanf("%d",&p);
switch(p)
{case 1:
	printf("\n Enter the ITEM for insertion:");
	scanf("%d",&item);
	 QINSERT(queue ,item);
   break;
   case 2:
   printf("\n Deletion of elements:\n");
    res=QDELETE(queue);
    if(front==-1)
          printf("\nqueue is empty") ;
    else
    printf("\n Deleted element is  %d:",res);break;
    case 3:
 printf("\n The queue is :\n"); DISPLAY(queue);
 break;
 case 4:exit(1);
  }
  }
   	   getch(); 
}