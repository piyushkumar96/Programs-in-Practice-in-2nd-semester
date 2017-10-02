
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left,*right;
}*root=NULL;
void insert(int x)
{    struct node *p,*previous,*current;

   p=malloc(sizeof(struct node));
   if(p==NULL)
   {
     printf("\n Out of memory");
   }
   p->data=x;
   p->left=NULL;
   p->right=NULL;
   if(root==NULL)
   {
     root=p;
     return;
   }
   previous=NULL;
   current=root;
   while(current!=NULL)
   {
       previous=current;
       if(p->data<current->data)
	    current=current->left;
       else
	    current=current->right;
	    }
     if(p->data<previous->data)
	  previous->left=p;
     else
 previous->right=p;
}
void inorder(struct node *t)
{
  if (t!=NULL)
  {
  inorder(t->left);
  printf("\n %5d",t->data);
  inorder(t->right);
  }
}
void preorder(struct node *t)
{
  if (t!=NULL)
{
  printf("\n %5d",t->data);
  preorder(t->left);
  preorder(t->right);
  }
}

void postorder(struct node *t)
{
  if (t!=NULL)
  {
  postorder(t->left);
  postorder(t->right);
  printf("\n %5d",t->data);
  }
}
void del(int x)
{
   int tright=0,tleft=0;
   struct node *ptr=root;
   struct node *parent=root;
   struct node *t1=root;
   struct node *temp=root;
   while(ptr!=NULL&& ptr->data!=x)
   {
      parent=ptr;
      if (x<ptr->data)
	    ptr=ptr->left;
      else
	   ptr=ptr->right;
   }
   if (ptr==NULL)
   {
     printf("\n Delete element not found");
     return ;
   }
   else if(t1->data==x && (t1->left ==NULL || t1->right==NULL))
	  if(t1->left==NULL)
	     t1=t1->right;
	  else
	     t1=t1->left;
   else if (ptr->left==NULL)
     if (x<parent->data)
       parent->left=ptr->right;
     else
       parent->right=ptr->right;
   else if (ptr->right==NULL)
     if (x<parent->data)
       parent->left=ptr->left;
     else
       parent->right=ptr->left;
   else
   {
temp=ptr;
   parent=ptr;
   if((ptr->left)>=(ptr->right))
   {
      ptr=ptr->left;
      while(ptr->right!=NULL)
      {
	   tright=1;
	   parent=ptr;
	   ptr=ptr->right;
      }
      temp->data=ptr->data;
      if(tright)
	   parent->right=ptr->left;
      else
	   parent->left=ptr->left;
    }
 else
    {
     ptr=ptr->right;
     while (ptr->left!=NULL)
     {
	   tleft=1;
	   parent=ptr;
	   ptr=ptr->left;
      }
      temp->data=ptr->data;
      if(tleft)
	   parent->left=ptr->right;
      else
	   parent->right=ptr->right;
    }
    free(ptr);
  }
}
void main()
{int op,n,srchno;
clrscr();
while(1)
{
    printf("\n 1.Insertion");
    printf("\n 2.Deletion");
    printf("\n 3.Inorder");
    printf("\n 4.Quit");
    printf("\n 5.preorder");
    printf("\n 6.postorder");
    printf("\n Enter your choice\n");
    scanf("%d",&op);
   switch (op)
   {
    case 1: printf("\n Enter the element to insert\n");
	      scanf("%d",&n);
	      insert(n);
	      break;

    case 2: printf("\n Enter the element to be deleted\n");
	      scanf("%d",&srchno);
	      del(srchno);
	      break;

    case 3: printf("\n The inorder elements are\n");
	      inorder(root);
	      break;
    case 5:printf("The preorder elements are\n");
	   preorder(root);
	   break;
    case 6: printf("\nThe postorder elements are\n");
	    postorder(root);
	    break;
    default: exit(0);

   }
  }
  getch();
  }

