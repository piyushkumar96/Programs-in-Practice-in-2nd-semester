#include<bits/stdc++.h>
using namespace std;

struct llist{
	int data;
	struct llist *next; 
	
};
llist* newnode(int item)
{
	struct llist* node=(struct llist*)malloc(sizeof(struct llist));
	node->data=item;
	node->next=NULL;
	return node;
}
int detectandremoveloop(llist* node)
{
	struct llist* slow=node,*fast=node;
	if((node==NULL)||(node->next==NULL))
		return 0;
	slow=slow->next;
	fast=fast->next->next;
	while(fast && fast->next)
		{
			if(slow == fast )
			    break;
			slow=slow->next;
			fast=fast->next->next;
		}
		if(fast == slow)
		{
			slow=node;
			while(slow->next!=fast->next)
			   {
			   		slow=slow->next;
			   		fast=fast->next;
			   }
			   fast->next=NULL;
			   return 1;
		}
	return 0;
}
void printlist(llist* node)
{
	while(node!=NULL)
		{
			cout<<node->data<<" ";
			node=node->next;
		}
}
int main()
{
	struct llist* head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	head->next->next->next=newnode(4);
	head->next->next->next->next=newnode(5);
	head->next->next->next->next->next=newnode(6);
	cout<<"Print list before ";
	printlist(head);
	head->next->next->next->next->next->next=head->next->next->next;
	if(detectandremoveloop(head))
	  {
	  	  cout<<"Loop is detected "<<endl;
	  }
	 else
	 {
	 	cout<<"LOOp is not detected "<<endl;
	 }

	
	return 0;
}
